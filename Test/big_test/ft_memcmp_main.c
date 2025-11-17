#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	*a1 = "Hello";
	const char	*a2 = "Hello";
	const char	*a3 = "Hellp";
	const char	*a4 = "";
	size_t		ns[] = {0, 1, 4, 5};
	int			i;
	int			res_ft;
	int			res_std;

	/* --- Comparaison chaînes identiques --- */
	i = 0;
	while (i < 4)
	{
		res_ft = ft_memcmp(a1, a2, ns[i]);
		res_std = memcmp(a1, a2, ns[i]);
		printf("memcmp(\"%s\", \"%s\", %zu) -> %d | ft_memcmp -> %d\n",
			a1, a2, ns[i], res_std, res_ft);
		i++;
	}

	/* --- Comparaison partielle différentes --- */
	printf("\nComparaison partielle :\n");
	i = 0;
	while (i < 4)
	{
		res_ft = ft_memcmp(a1, a3, ns[i]);
		res_std = memcmp(a1, a3, ns[i]);
		printf("memcmp(\"%s\", \"%s\", %zu) -> %d | ft_memcmp -> %d\n",
			a1, a3, ns[i], res_std, res_ft);
		i++;
	}

	/* --- Comparaison avec chaîne vide --- */
	printf("\nComparaison avec chaîne vide :\n");
	res_ft = ft_memcmp(a4, a4, 0);
	res_std = memcmp(a4, a4, 0);
	printf("memcmp(\"\", \"\", 0) -> %d | ft_memcmp -> %d\n", res_std, res_ft);

	return (0);
}

