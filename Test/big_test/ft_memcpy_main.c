#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	buf1[20];
	char	buf2[20];

	/* --- Test classique --- */
	strcpy(buf1, "Hello World");
	strcpy(buf2, "Hello World");
	ft_memcpy(buf1 + 6, buf1, 5); 
	memcpy(buf2 + 6, buf2, 5);
	printf("ft_memcpy -> '%s'\n", buf1);
	printf("memcpy    -> '%s'\n\n", buf2);

	/* --- Test n = 0 --- */
	strcpy(buf1, "Hello");
	strcpy(buf2, "Hello");
	ft_memcpy(buf1, buf1 + 2, 0);
	memcpy(buf2, buf2 + 2, 0);
	printf("ft_memcpy n=0 -> '%s'\n", buf1);
	printf("memcpy n=0    -> '%s'\n\n", buf2);

	/* --- Test chaîne vide --- */
	strcpy(buf1, "");
	strcpy(buf2, "");
	ft_memcpy(buf1, buf1, 5);
	memcpy(buf2, buf2, 5);
	printf("ft_memcpy chaîne vide -> '%s'\n", buf1);
	printf("memcpy chaîne vide    -> '%s'\n\n", buf2);

	/* --- Test NULL NULL --- */
	//ft_memcpy(((void*)0),((void*)0), 3);
	memcpy(((void*)0),((void*)0), 3);
	printf("ft_memcpy chaîne vide -> '%s'\n", buf1);
	printf("memcpy chaîne vide    -> '%s'\n\n", buf2);

	return 0;
}

