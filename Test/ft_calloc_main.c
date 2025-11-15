#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char *res1;
    char *res2;

    /* --- Test classique --- */
    res1 = ft_strdup("Hello World");
    res2 = strdup("Hello World");
    printf("Original : 'Hello World'\n");
    printf("ft_strdup : '%s'\n", res1);
    printf("strdup    : '%s'\n", res2);
    free(res1);
    free(res2);

    /* --- Test chaîne vide --- */
    res1 = ft_strdup("");
    res2 = strdup("");
    printf("\nOriginal : ''\n");
    printf("ft_strdup : '%s'\n", res1);
    printf("strdup    : '%s'\n", res2);
    free(res1);
    free(res2);

    /* --- Test avec chaîne longue --- */
    char long_str[100];
    for (int i = 0; i < 99; i++)
        long_str[i] = 'a' + (i % 26);
    long_str[99] = '\0';

    res1 = ft_strdup(long_str);
    res2 = strdup(long_str);
    printf("\nTest longue chaîne\n");
    printf("ft_strdup : '%s'\n", res1);
    printf("strdup    : '%s'\n", res2);
    free(res1);
    free(res2);

    /* --- Test avec NULL (optionnel) --- */
    res1 = ft_strdup(NULL);
    if (!res1)
        printf("\nft_strdup(NULL) -> NULL\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char *res1;
    char *res2;

    /* --- Test classique --- */
    res1 = ft_strdup("Hello World");
    res2 = strdup("Hello World");
    printf("Original : 'Hello World'\n");
    printf("ft_strdup : '%s'\n", res1);
    printf("strdup    : '%s'\n", res2);
    free(res1);
    free(res2);

    /* --- Test chaîne vide --- */
    res1 = ft_strdup("");
    res2 = strdup("");
    printf("\nOriginal : ''\n");
    printf("ft_strdup : '%s'\n", res1);
    printf("strdup    : '%s'\n", res2);
    free(res1);
    free(res2);

    /* --- Test avec chaîne longue --- */
    char long_str[100];
    for (int i = 0; i < 99; i++)
        long_str[i] = 'a' + (i % 26);
    long_str[99] = '\0';

    res1 = ft_strdup(long_str);
    res2 = strdup(long_str);
    printf("\nTest longue chaîne\n");
    printf("ft_strdup : '%s'\n", res1);
    printf("strdup    : '%s'\n", res2);
    free(res1);
    free(res2);

    /* --- Test avec NULL (optionnel) --- */
    res1 = ft_strdup(NULL);
    if (!res1)
        printf("\nft_strdup(NULL) -> NULL\n");

    return 0;
}

