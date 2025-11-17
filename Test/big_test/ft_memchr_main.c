#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	*str = "Hello World";
	const char	*empty = "";
	int			chars[] = {'H', 'd', 'z', 0}; 
	size_t		n = strlen(str);
	int			i;
	char		*res_ft;
	char		*res_std;
	char		*print_ft;
	char		*print_std;

	i = 0;
	while (i < 4)
	{
		res_ft = ft_memchr(str, chars[i], n);
		res_std = memchr(str, chars[i], n);

		if (res_ft == NULL)
			print_ft = "NULL";
		else
			print_ft = res_ft;

		if (res_std == NULL)
			print_std = "NULL";
		else
			print_std = res_std;

		printf("ft_memchr(\"%s\", \'%c\', %zu) -> %s\n",
			str, chars[i], n, print_ft);
		printf("memchr(\"%s\", \'%c\', %zu) -> %s\n\n",
			str, chars[i], n, print_std);
		i++;
	}

	/* --- Test dans chaîne vide --- */
	res_ft = ft_memchr(empty, 'a', 1);
	res_std = memchr(empty, 'a', 1);

	if (res_ft == NULL)
		print_ft = "NULL";
	else
		print_ft = res_ft;

	if (res_std == NULL)
		print_std = "NULL";
	else
		print_std = res_std;

	printf("ft_memchr(\"\") -> %s\n", print_ft);
	printf("memchr(\"\") -> %s\n", print_std);

	return (0);
}

