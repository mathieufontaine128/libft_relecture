/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:56:16 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/13 19:42:25 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*z;

	if (!s)
		return (NULL);
	z = (const unsigned char *)s;
	while (n > 0)
	{
		if (*z == (unsigned char)c)
			return ((void *)z);
		z++;
		n--;
	}
	return (NULL);
}
