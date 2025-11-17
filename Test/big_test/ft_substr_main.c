#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	char	*res;

	printf("\nTest classique\n");
	res = ft_substr("Hello World", 6, 5);
	printf("ft_substr(\"Hello World\", 6, 5) -> '%s'", res);
	printf("  (attendu : 'World')\n");
	free(res);

	printf("\nTest start = 0\n");
	res = ft_substr("Hello World", 0, 5);
	printf("ft_substr(\"Hello World\", 0, 5) -> '%s'", res);
	printf("  (attendu : 'Hello')\n");
	free(res);

	printf("\nTest len > longueur chaine\n");
	res = ft_substr("Hello", 1, 100);
	printf("ft_substr(\"Hello\", 1, 100) -> '%s'", res);
	printf("  (attendu : 'ello')\n");
	free(res);

	printf("\nTest start au-dela de la fin\n");
	res = ft_substr("Hello", 10, 5);
	printf("ft_substr(\"Hello\", 10, 5) -> '%s'", res);
	printf("  (attendu : '')\n");
	free(res);

	printf("\nTest chaine vide\n");
	res = ft_substr("", 0, 5);
	printf("ft_substr(\"\", 0, 5) -> '%s'", res);
	printf("  (attendu : '')\n");
	free(res);

	return (0);
}

