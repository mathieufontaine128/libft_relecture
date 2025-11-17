#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*res;

	printf("\n--- Test ft_strtrim(\"   hello world   \", \" \") ---\n");
	res = ft_strtrim("   hello world   ", " ");
	printf("ft_strtrim -> '%s'\n", res);
	printf("Attendu    -> 'hello world'\n");
	free(res);

	printf("\n--- Test ft_strtrim(\"abcHelloabcWorldcba\", \"abc\") ---\n");
	res = ft_strtrim("abcHelloabcWorldcba", "abc");
	printf("ft_strtrim -> '%s'\n", res);
	printf("Attendu    -> 'HelloabcWorld'\n");
	free(res);

	printf("\n--- Test ft_strtrim(\"\", \" \") ---\n");
	res = ft_strtrim("", " ");
	printf("ft_strtrim -> '%s'\n", res);
	printf("Attendu    -> ''\n");
	free(res);

	printf("\n--- Test ft_strtrim(\"aaa\", \"a\") ---\n");
	res = ft_strtrim("aaa", "a");
	printf("ft_strtrim -> '%s'\n", res);
	printf("Attendu    -> ''\n");
	free(res);

	printf("\n--- Test ft_strtrim(\" hello \", \"\") ---\n");
	res = ft_strtrim(" hello ", "");
	printf("ft_strtrim -> '%s'\n", res);
	printf("Attendu    -> ' hello '\n");
	free(res);

	printf("\n--- Test ft_strtrim(\"\", \"\") ---\n");
	res = ft_strtrim("", "");
	printf("ft_strtrim -> '%s'\n", res);
	printf("Attendu    -> ''\n");
	free(res);

	printf("\n--- Test ft_strtrim(NULL, \" \") ---\n");
	res = ft_strtrim(NULL, " ");
	if (res == NULL)
		printf("ft_strtrim -> NULL\n");

	printf("\n--- Test ft_strtrim(\" hello \", NULL) ---\n");
	res = ft_strtrim(" hello ", NULL);
	if (res == NULL)
		printf("ft_strtrim -> NULL\n");

	return (0);
}

