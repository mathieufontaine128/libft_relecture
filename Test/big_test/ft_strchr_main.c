#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	*str = "Hello World!";
	const char	*empty = "";
	int			chars[] = {'H', 'o', '!', 'z', '\0'};
	int			i;
	char		*res_ft;
	char		*res_std;
	char		*to_print;

	i = 0;
	while (i < 5)
	{
		res_ft = ft_strchr(str, chars[i]);
		res_std = strchr(str, chars[i]);

		if (res_ft == NULL)
			to_print = "NULL";
		else
			to_print = res_ft;
		printf("ft_strchr(\"%s\", '%c') -> %s\n", str, chars[i], to_print);

		if (res_std == NULL)
			to_print = "NULL";
		else
			to_print = res_std;
		printf("strchr(\"%s\", '%c') -> %s\n\n", str, chars[i], to_print);
		i++;
	}

	/* --- Test dans chaîne vide --- */
	res_ft = ft_strchr(empty, 'a');
	res_std = strchr(empty, 'a');

	if (res_ft == NULL)
		to_print = "NULL";
	else
		to_print = res_ft;
	printf("ft_strchr(\"\",'a') -> %s\n", to_print);

	if (res_std == NULL)
		to_print = "NULL";
	else
		to_print = res_std;
	printf("strchr(\"\",'a') -> %s\n", to_print);

	return (0);
}

