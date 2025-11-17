#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*res;

	printf("\n--- Test ft_itoa(0) ---\n");
	res = ft_itoa(0);
	printf("ft_itoa(0) -> %s\n", res);
	free(res);

	printf("\n--- Test ft_itoa(42) ---\n");
	res = ft_itoa(42);
	printf("ft_itoa(42) -> %s\n", res);
	free(res);

	printf("\n--- Test ft_itoa(-42) ---\n");
	res = ft_itoa(-42);
	printf("ft_itoa(-42) -> %s\n", res);
	free(res);

	printf("\n--- Test INT_MAX ---\n");
	res = ft_itoa(INT_MAX);
	printf("ft_itoa(INT_MAX) -> %s\n", res);
	free(res);

	printf("\n--- Test INT_MIN ---\n");
	res = ft_itoa(INT_MIN);
	printf("ft_itoa(INT_MIN) -> %s\n", res);
	free(res);

	printf("\n--- Test grand nombre négatif ---\n");
	res = ft_itoa(-123456789);
	printf("ft_itoa(-123456789) -> %s\n", res);
	free(res);

	return (0);
}

