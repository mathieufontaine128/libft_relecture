#include <stdio.h>
#include <bsd/string.h> // pour strlcpy/strlcat sur Linux
#include "libft.h"

int	main(void)
{
	char	dest1[20];
	char	dest2[20];
	size_t	size;
	size_t	res_ft;
	size_t	res_std;

	/* --- Test classique --- */
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	strcpy(dest1, "Hello ");
	strcpy(dest2, "Hello ");
	size = 20;
	res_ft = ft_strlcat(dest1, "World", size);
	res_std = strlcat(dest2, "World", size);
	printf("ft_strlcat -> '%s', retour = %zu\n", dest1, res_ft);
	printf("strlcat    -> '%s', retour = %zu\n\n", dest2, res_std);

	/* --- Test taille plus petite que strlen(dest) (troncature) --- */
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	strcpy(dest1, "Hello ");
	strcpy(dest2, "Hello ");
	size = 8; // volontairement trop petit
	res_ft = ft_strlcat(dest1, "World", size);
	res_std = strlcat(dest2, "World", size);
	printf("ft_strlcat -> '%s', retour = %zu", dest1, res_ft);
	if (res_ft >= size)
		printf(" (troncature détectée)");
	printf("\n");
	printf("strlcat    -> '%s', retour = %zu", dest2, res_std);
	if (res_std >= size)
		printf(" (troncature détectée)");
	printf("\n\n");

	/* --- Test taille = 0 --- */
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	strcpy(dest1, "Hello ");
	strcpy(dest2, "Hello ");
	size = 0;
	res_ft = ft_strlcat(dest1, "World", size);
	res_std = strlcat(dest2, "World", size);
	printf("ft_strlcat -> '%s', retour = %zu\n", dest1, res_ft);
	printf("strlcat    -> '%s', retour = %zu\n\n", dest2, res_std);

	/* --- Test src vide --- */
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	strcpy(dest1, "Hello ");
	strcpy(dest2, "Hello ");
	size = 20;
	res_ft = ft_strlcat(dest1, "", size);
	res_std = strlcat(dest2, "", size);
	printf("ft_strlcat -> '%s', retour = %zu\n", dest1, res_ft);
	printf("strlcat    -> '%s', retour = %zu\n\n", dest2, res_std);

	/* --- Test dest vide --- */
	ft_bzero(dest1, sizeof(dest1));
	ft_bzero(dest2, sizeof(dest2));
	strcpy(dest1, "");
	strcpy(dest2, "");
	size = 10;
	res_ft = ft_strlcat(dest1, "World", size);
	res_std = strlcat(dest2, "World", size);
	printf("ft_strlcat -> '%s', retour = %zu\n", dest1, res_ft);
	printf("strlcat    -> '%s', retour = %zu\n\n", dest2, res_std);

	return (0);
}

/* Compilation sur Linux :
   gcc -Wall -Wextra -Werror main.c -lbsd -o test */

