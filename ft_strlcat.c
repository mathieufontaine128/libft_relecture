/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:43:49 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/11 18:00:27 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	init_dest_len;
	size_t	src_len;

	i = 0;
	while (dest[i] && i < size)
		i++;
	init_dest_len = i;
	src_len = ft_strlen(src);
	if (size <= init_dest_len)
		return (src_len + size);
	j = 0;
	while (src[j] && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (init_dest_len + src_len);
}
