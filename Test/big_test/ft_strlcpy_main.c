#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

int	main(void)
{
	char	dest1[20];
	char	dest2[20];
	size_t	size;

	/* --- Test classique --- */
	size = 20;
	ft_strlcpy(dest1, "Hello World", size);
	strlcpy(dest2, "Hello World", size);
	printf("ft_strlcpy -> '%s'\n", dest1);
	printf("strlcpy    -> '%s'\n\n", dest2);

	/* --- Test taille plus petite que strlen(src) --- */
	size = 5;
	ft_strlcpy(dest1, "Hello World", size);
	strlcpy(dest2, "Hello World", size);
	printf("ft_strlcpy -> '%s'\n", dest1);
	printf("strlcpy    -> '%s'\n\n", dest2);

	/* --- Test taille = 0 --- */
	size = 0;
	ft_memset(dest1, 0, sizeof(dest1));
	ft_memset(dest2, 0, sizeof(dest2));
	ft_strlcpy(dest1, "Hello World", size);
	strlcpy(dest2, "Hello World", size);
	printf("ft_strlcpy -> '%s'\n", dest1);
	printf("strlcpy    -> '%s'\n\n", dest2);

	/* --- Test src vide --- */
	size = 10;
	ft_strlcpy(dest1, "", size);
	strlcpy(dest2, "", size);
	printf("ft_strlcpy -> '%s'\n", dest1);
	printf("strlcpy    -> '%s'\n\n", dest2);

	return (0);
}
/*don't forget -lbsd flag to compile
cc -Wall -Werror -Wextra Test/ft_strlcpy_main.c -lbsd 
-Ilibft -Llibft -lft -o test_ft_strlcpy*/
