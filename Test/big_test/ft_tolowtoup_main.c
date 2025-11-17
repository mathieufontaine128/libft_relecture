#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	tests[] = {'a', 'z', 'A', 'Z', '0', '9', '!', -1, 200};
	int	size = sizeof(tests) / sizeof(tests[0]);
	int	i;
	int	res_ft;
	int	res_std;

	printf("=== Test ft_tolower ===\n");
	i = 0;
	while (i < size)
	{
		res_ft = ft_tolower(tests[i]);
		res_std = tolower(tests[i]);

		printf("ft_tolower(%d='%c') -> %d='%c' | tolower -> %d='%c'\n",
			tests[i], tests[i],
			res_ft, res_ft,
			res_std, res_std);
		i++;
	}

	printf("\n=== Test ft_toupper ===\n");
	i = 0;
	while (i < size)
	{
		res_ft = ft_toupper(tests[i]);
		res_std = toupper(tests[i]);

		printf("ft_toupper(%d='%c') -> %d='%c' | toupper -> %d='%c'\n",
			tests[i], tests[i],
			res_ft, res_ft,
			res_std, res_std);
		i++;
	}

	return (0);
}

