/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 23:08:45 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/13 18:22:35 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	dest[] = "12345";
	char	src[] = "xxx";

	printf("%p\n", memcpy(dest,src,0));
	char dest2[] = "12345";
	char src2[] = "xxx";	
	printf("%p\n", ft_memcpy(dest2,src2,0));
	//printf("%p\n", memcpy(dest3, src3,2));
	//printf("%p\n", ft_memcpy(dest4,src4,2));
	return (0);
}

