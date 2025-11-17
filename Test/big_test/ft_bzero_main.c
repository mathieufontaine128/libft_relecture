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
	ft_bzero(buf1, 5);
	bzero(buf2, 5);
	printf("ft_bzero -> ");
	while (i < 9)	
	{
		printf("%c ", buf1[i]);
		i++;
	}
	printf("\nbezro    -> ");
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
	ft_bzero(buf1, 0);
	bzero(buf2, 0);
	printf("ft_bzero -> ");
	i = 0;
	while (i < 9)	
	{
		printf("%c ", buf1[i]);
		i++;
	}
	printf("\nbzero    -> ");
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
	ft_bzero(buf1, 9);
	bzero(buf2, 9);
	printf("ft_bzero -> ");
	i = 0;
	while (i < 9)	
	{
		printf("%c ", buf1[i]);
		i++;
	}
	printf("\nbzero    -> ");
	i = 0;
	while (i < 9)
	{
		printf("%c ", buf2[i]);
		i++;
	}
	printf("\n\n");
}
