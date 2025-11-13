/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 06:43:11 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/13 23:44:20 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	size_t	tab_len;

	if (!s1 || !s2)
		return (NULL);
	tab_len = ft_strlen(s1) + ft_strlen(s2);
	tab = (char *)malloc((tab_len + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s1, ft_strlen(s1) + 1);
	ft_strlcat(tab, s2, tab_len + 1);
	return (tab);
}
