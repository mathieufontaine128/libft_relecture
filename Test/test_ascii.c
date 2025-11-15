/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:23:14 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/11 22:51:51 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int main(void)
{
	int i;
	
	i = -5;
	while (i <= 128)
	{
		
		printf("==================================================\npour i = %d\n====                                         =====\n", i);
		if (ft_isalpha(i))
		{
			printf("le charactere %c est bien une lettre\n", i);
			printf("ft_toupper %c) donne %c\n", i, ft_toupper(i));
			printf("ft_tolower(%c) donne %c\n", i, ft_tolower(i));
		}
		
		if (ft_isdigit(i))
		{
			printf("le charactere %c est bien un nombre\n", i);
		}
		if (ft_isalnum(i))
		{
			printf("le charactere %c est bien une lettre ou un nombre\n", i);
		}
		if (ft_isascii(i))
		{
			printf("le charactere %c fait parti de la table ascii\n", i);
		}
		if (ft_isprint(i))
		{
			printf("le charactere %c est bien un printable\n", i);
		}
		i++;
	}
	return (1);
}

