/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:32:12 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/14 18:08:52 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	len;

	if (!src)
		return (NULL);
	len = ft_strlen(src) + 1;
	copy = (char *) malloc(len * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, src, len);
	return (copy);
}
