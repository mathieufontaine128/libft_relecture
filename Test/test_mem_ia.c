/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_mem_ia.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: [TonNom]                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12                                #+#    #+#             */
/*   Updated: 2025/11/13 18:00:19 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

/*
** Programme de test complet pour les fonctions mémoire de la libft.
** Compile avec : gcc test_memory.c -I../libft -L../libft -lft -o test_memory
*/

int	main(void)
{
	char	buffer1[20];
	char	buffer2[20];
	char	src[20] = "123456789";
	char	*ptr1;
	char	*ptr2;
	int		result1;
	int		result2;

	/* ================================================================
	** 1. ft_memset
	** Remplit un bloc mémoire avec un caractère donné.
	** ================================================================ */
	printf("===== ft_memset =====\n");
	strcpy(buffer1, "AAAAA");
	strcpy(buffer2, "AAAAA");
	printf("Avant : %s | %s\n", buffer1, buffer2);
	memset(buffer1, 'X', 3);
	ft_memset(buffer2, 'X', 3);
	printf("Après : %s | %s\n\n", buffer1, buffer2);

	/* ================================================================
	** 2. ft_bzero
	** Met n octets à 0 dans la mémoire donnée.
	** ================================================================ */
	printf("===== ft_bzero =====\n");
	strcpy(buffer1, "ABCDE");
	strcpy(buffer2, "ABCDE");
	bzero(buffer1, 3);
	ft_bzero(buffer2, 3);
	printf("Après bzero 3 octets :\n");
	printf("buffer1 = ");
	int i = 0;
	while (i < 5)
	{
		if (buffer1[i] == 0)
			printf("\\0");
		else
			printf("%c", buffer1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("buffer2 = ");
	while (i < 5)
	{
		if (buffer2[i] == 0)
			printf("\\0");
		else
			printf("%c", buffer2[i]);
		i++;
	}
	printf("\n\n");

	/* ================================================================
	** 3. ft_memcpy
	** Copie n octets d’une source vers une destination (non chevauchantes).
	** ================================================================ */
	printf("===== ft_memcpy =====\n");
	char dest1[10] = "OOOOO";
	char dest2[10] = "OOOOO";
	memcpy(dest1, src, 4);
	ft_memcpy(dest2, src, 4);
	printf("memcpy : %s | ft_memcpy : %s\n\n", dest1, dest2);

	/* ================================================================
	** 4. ft_memmove
	** Copie n octets même si les zones mémoire se chevauchent.
	** ================================================================ */
	printf("===== ft_memmove =====\n");
	char overlap1[20] = "123456789";
	char overlap2[20] = "123456789";
	memmove(overlap1 + 2, overlap1, 5);
	ft_memmove(overlap2 + 2, overlap2, 5);
	printf("memmove : %s | ft_memmove : %s\n\n", overlap1, overlap2);

	/* ================================================================
	** 5. ft_memchr
	** Recherche un octet dans une zone mémoire.
	** ================================================================ */
	printf("===== ft_memchr =====\n");
	ptr1 = memchr(src, '5', 9);
	ptr2 = ft_memchr(src, '5', 9);
	printf("memchr : %c | ft_memchr : %c\n\n",
		ptr1 ? *ptr1 : '0', ptr2 ? *ptr2 : '0');

	/* ================================================================
	** 6. ft_memcmp
	** Compare deux zones mémoire octet par octet.
	** ================================================================ */
	printf("===== ft_memcmp =====\n");
	char cmp1[] = "ABCDEF";
	char cmp2[] = "ABCDXY";
	result1 = memcmp(cmp1, cmp2, 6);
	result2 = ft_memcmp(cmp1, cmp2, 6);
	printf("memcmp : %d | ft_memcmp : %d\n", result1, result2);
	printf("(résultat < 0 si 1er < 2e, 0 si identiques, > 0 sinon)\n\n");

	/* ================================================================
	** 7. Cas limite : n == 0
	** Aucune opération ne doit être faite, pas de segfault possible.
	** ================================================================ */
	printf("===== Cas limite n == 0 =====\n");
	memcpy(buffer1, src, 0);
	ft_memcpy(buffer2, src, 0);
	printf("OK : aucune modification, pas de crash.\n");

	return (0);
}

