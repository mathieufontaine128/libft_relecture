/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:24:21 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/14 11:49:40 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	size_total;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	size_total = nmemb * size;
	tab = malloc(size_total);
	if (!tab)
		return (NULL);
	ft_bzero(tab, size_total);
	return (tab);
}
