#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char	buf1[10];
	char	buf2[10];
	int	i = 0;

	/* --- Remplissage classique ---*/ 
	strcpy(buf1, "123456789");
	strcpy(buf2, "123456789");
	ft_memset(buf1, 'A', 5);
	memset(buf2, 'A', 5);
	printf("ft_memset -> ");
	while (i < 9)	
	{
		printf("%c ", buf1[i]);
		i++;
	}
	printf("\nmemset    -> ");
	i = 0;
	while (i < 9)
	{
		printf("%c ", buf2[i]);
		i++;
	}
	printf("\n\n");

	/* --- Remplissage n = 0 ---*/ 
	strcpy(buf1, "123456789");
	strcpy(buf2, "123456789");
	ft_memset(buf1, 'B', 0);
	//memset(buf2, 'B', 0);
	printf("ft_memset -> ");
	i = 0;
	while (i < 9)	
	{
		printf("%c ", buf1[i]);
		i++;
	}
	printf("\nmemset    -> ");
	i = 0;
	while (i < 9)
	{
		printf("%c ", buf2[i]);
		i++;
	}
	printf("\n\n");

	/* --- Remplissage complet ---*/ 
	strcpy(buf1, "123456789");
	strcpy(buf2, "123456789");
	ft_memset(buf1, 'C', 9);
	memset(buf2, 'C', 9);
	printf("ft_memset -> ");
	i = 0;
	while (i < 9)	
	{
		printf("%c ", buf1[i]);
		i++;
	}
	printf("\nmemset    -> ");
	i = 0;
	while (i < 9)
	{
		printf("%c ", buf2[i]);
		i++;
	}
	printf("\n\n");
}
