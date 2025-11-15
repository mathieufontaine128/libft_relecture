#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	buf1[20];
	char	buf2[20];

	/* --- Test classique, zones non chevauchantes --- */
	strcpy(buf1, "Hello World");
	strcpy(buf2, "Hello World");
	ft_memmove(buf1 + 6, buf1, 5); // décalage vers la droite
	memmove(buf2 + 6, buf2, 5);
	printf("ft_memmove -> '%s'\n", buf1);
	printf("memmove    -> '%s'\n\n", buf2);

	/* --- Test chevauchement : src avant dest --- */
	strcpy(buf1, "123456789");
	strcpy(buf2, "123456789");
	ft_memmove(buf1 + 2, buf1, 5);
	memmove(buf2 + 2, buf2, 5);
	printf("ft_memmove chevauchement src->dest -> '%s'\n", buf1);
	printf("memmove    chevauchement src->dest -> '%s'\n\n", buf2);

	/* --- Test chevauchement : dest avant src --- */
	strcpy(buf1, "123456789");
	strcpy(buf2, "123456789");
	ft_memmove(buf1, buf1 + 2, 5);
	memmove(buf2, buf2 + 2, 5);
	printf("ft_memmove chevauchement dest->src -> '%s'\n", buf1);
	printf("memmove    chevauchement dest->src -> '%s'\n\n", buf2);

	/* --- Test n = 0 --- */
	strcpy(buf1, "Hello");
	strcpy(buf2, "12345");
	ft_memmove(buf1, buf1 + 2, 0);
	memmove(buf2, buf2 + 2, 0);
	printf("ft_memmove n=0 -> '%s'\n", buf1);
	printf("memmove n=0    -> '%s'\n\n", buf2);

	/* --- Test chaîne vide --- */
	strcpy(buf1, "");
	strcpy(buf2, "");
	ft_memmove(buf1, buf1, 5);
	memmove(buf2, buf2, 5);
	printf("ft_memmove chaîne vide -> '%s'\n", buf1);
	printf("memmove chaîne vide    -> '%s'\n", buf2);

	return (0);
}

