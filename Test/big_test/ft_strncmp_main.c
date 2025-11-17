#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	const char	*s1 = "Hello";
	const char	*s2 = "Hello";
	const char	*s3 = "Hellp";
	const char	*s4 = "";
	size_t		ns[] = {0, 1, 4, 5, 10};
	int			i;
	int			res_ft;
	int			res_std;

	printf("Comparaison chaînes identiques :\n");
	i = 0;
	while (i < 5)
	{
		res_ft = ft_strncmp(s1, s2, ns[i]);
		res_std = strncmp(s1, s2, ns[i]);
		printf("strncmp(\"%s\", \"%s\", %zu) -> %d | ft_strncmp -> %d\n",
			s1, s2, ns[i], res_std, res_ft);
		i++;
	}

	printf("\nComparaison chaînes différentes :\n");
	i = 0;
	while (i < 5)
	{
		res_ft = ft_strncmp(s1, s3, ns[i]);
		res_std = strncmp(s1, s3, ns[i]);
		printf("strncmp(\"%s\", \"%s\", %zu) -> %d | ft_strncmp -> %d\n",
			s1, s3, ns[i], res_std, res_ft);
		i++;
	}

	printf("\nComparaison avec chaîne vide :\n");
	res_ft = ft_strncmp(s4, s4, 5);
	res_std = strncmp(s4, s4, 5);
	printf("strncmp(\"\", \"\", 5) -> %d | ft_strncmp -> %d\n", res_std, res_ft);

	return (0);
}

