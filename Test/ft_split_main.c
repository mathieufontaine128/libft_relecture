#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	print_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
	{
		printf("NULL\n");
		return ;
	}
	while (split[i])
	{
		printf("split[%d] -> \"%s\"\n", i, split[i]);
		i++;
	}
}

int	main(void)
{
	char	**res;

	printf("\n--- Test classique ---\n");
	res = ft_split("Hello world 42", ' ');
	print_split(res);
	free_split(res);

	printf("\n--- Test chaîne vide ---\n");
	res = ft_split("", ' ');
	print_split(res);
	free_split(res);

	printf("\n--- Test plusieurs délimiteurs consécutifs ---\n");
	res = ft_split("Hello   world", ' ');
	print_split(res);
	free_split(res);

	printf("\n--- Test délimiteur absent ---\n");
	res = ft_split("NoDelimiterHere", ' ');
	print_split(res);
	free_split(res);

	printf("\n--- Test chaîne avec seulement des délimiteurs ---\n");
	res = ft_split("   ", ' ');
	print_split(res);
	free_split(res);

	return (0);
}

