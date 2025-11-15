#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	int i = 0;
	int tests[] = {'a', 'z', 'A', 'Z', '0', '9', '!', -1, 200};
	int size = sizeof(tests) / sizeof(tests[0]);
	int display;
	while (i< size)
	{	
		int c = tests[i];
		if (c != 0)
			display = c;
		else
			display = '0';
		printf("Caractère: %d='%c'\n", c, display);

		printf("ft_isalpha: %d | isalpha: %d\n", ft_isalpha(c) != 0, isalpha(c) != 0);
		printf("ft_isdigit: %d | isdigit: %d\n", ft_isdigit(c) != 0, isdigit(c) != 0);
		printf("ft_isalnum: %d | isalnum: %d\n", ft_isalnum(c) != 0, isalnum(c) != 0);
		printf("ft_isascii: %d | isascii: %d\n", ft_isascii(c) != 0, isascii(c) != 0);
		printf("ft_isprint: %d | isprint: %d\n", ft_isprint(c) != 0, isprint(c) != 0);

		printf("\n");
		i++;
	}

	return 0;
}

