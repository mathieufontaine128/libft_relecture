#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

int	main(void)
{
	const char	*big = "Hello piscine 42";
	const char	*tests[] = {"Hello", "piscine", "42", "", "notfound"};
	size_t		lens[] = {0, 5, 13};
	int			i;
	int			j;
	char		*res_ft;
	char		*res_std;

	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 3)
		{
			res_ft = ft_strnstr(big, tests[i], lens[j]);
			res_std = strnstr(big, tests[i], lens[j]);

			printf("ft_strnstr(\"%s\", \"%s\", %zu) -> ",
				big, tests[i], lens[j]);
			if (res_ft == NULL)
				printf("NULL\n");
			else
				printf("%s\n", res_ft);

			printf("strnstr(\"%s\", \"%s\", %zu) -> ",
				big, tests[i], lens[j]);
			if (res_std == NULL)
				printf("NULL\n\n");
			else
				printf("%s\n\n", res_std);
			j++;
		}
		printf("---------------------------------\n");
		i++;
	}

	printf("--- Test big vide ---\n");
	res_ft = ft_strnstr("", "abc", 5);
	res_std = strnstr("", "abc", 5);

	printf("ft_strnstr(\"\", \"abc\", 5) -> ");
	if (res_ft == NULL)
		printf("NULL\n");
	else
		printf("%s\n", res_ft);

	printf("strnstr(\"\", \"abc\", 5) -> ");
	if (res_std == NULL)
		printf("NULL\n");
	else
		printf("%s\n", res_std);

	return (0);
}

