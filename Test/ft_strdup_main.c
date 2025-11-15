#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char    *res1;
    char    *res2;
    char    long_str[100];
    int     i;

    printf(" --- Test classique --- ");
    res1 = ft_strdup("Hello World");
    res2 = strdup("Hello World");
    printf("Original : 'Hello World'\n");
    printf("ft_strdup : '%s'\n", res1);
    printf("strdup    : '%s'\n", res2);
    free(res1);
    free(res2);

    printf(" --- Test chaîne vide --- ");
    res1 = ft_strdup("");
    res2 = strdup("");
    printf("\nOriginal : ''\n");
    printf("ft_strdup : '%s'\n", res1);
    printf("strdup    : '%s'\n", res2);
    free(res1);
    free(res2);

    printf(" --- Test avec chaîne longue --- ");
    i = 0;
    while (i < 99)
    {
        long_str[i] = 'a' + (i % 26);
        i++;
    }
    long_str[99] = '\0';

    res1 = ft_strdup(long_str);
    res2 = strdup(long_str);

    printf("\nTest longue chaîne\n");
    printf("ft_strdup : '%s'\n", res1);
    printf("strdup    : '%s'\n", res2);

    free(res1);
    free(res2);

    return (0);
}

