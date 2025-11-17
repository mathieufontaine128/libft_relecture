#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*res;

	printf("\n--- Test ft_strjoin(\"Hello \", \"World\") ---\n");
	res = ft_strjoin("Hello ", "World");
	printf("ft_strjoin -> '%s'\n", res);
	printf("Attendu    -> 'Hello World'\n");
	free(res);

	printf("\n--- Test ft_strjoin(\"\", \"World\") ---\n");
	res = ft_strjoin("", "World");
	printf("ft_strjoin -> '%s'\n", res);
	printf("Attendu    -> 'World'\n");
	free(res);

	printf("\n--- Test ft_strjoin(\"Hello\", \"\") ---\n");
	res = ft_strjoin("Hello", "");
	printf("ft_strjoin -> '%s'\n", res);
	printf("Attendu    -> 'Hello'\n");
	free(res);

	printf("\n--- Test ft_strjoin(\"\", \"\") ---\n");
	res = ft_strjoin("", "");
	printf("ft_strjoin -> '%s'\n", res);
	printf("Attendu    -> ''\n");
	free(res);

	printf("\n--- Test ft_strjoin(NULL, \"World\") ---\n");
	res = ft_strjoin(NULL, "World");
	if (res == NULL)
		printf("ft_strjoin -> NULL\n");

	printf("\n--- Test ft_strjoin(\"Hello\", NULL) ---\n");
	res = ft_strjoin("Hello", NULL);
	if (res == NULL)
		printf("ft_strjoin -> NULL\n");

	printf("\n--- Test ft_strjoin(NULL, NULL) ---\n");
	res = ft_strjoin(NULL, NULL);
	if (res == NULL)
		printf("ft_strjoin -> NULL\n");

	return (0);
}

