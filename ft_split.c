/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:47:11 by mfontain          #+#    #+#             */
/*   Updated: 2025/11/09 21:29:23 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	word_count;
	int	dedans;

	i = 0;
	word_count = 0;
	dedans = 0;
	while (s[i])
	{
		if (s[i] != c && dedans == 0)
		{
			word_count++;
			dedans = 1;
		}
		else if (s[i] == c)
			dedans = 0;
		i++;
	}
	return (word_count);
}

static	int	ft_word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**free_all(char **tab, int count)
{
	int	i;

	i = 0;
	while (i < count)
		free(tab[i++]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**final_tab;

	final_tab = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!final_tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = ft_word_len(s, c);
			final_tab[i] = malloc((len + 1) * sizeof(char));
			if (!final_tab[i])
				return (free_all(final_tab, i));
			ft_strlcpy(final_tab[i], s, len + 1);
			i++;
			s += len;
		}
	}
	final_tab[i] = NULL;
	return (final_tab);
}
