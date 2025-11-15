#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/* Callback : met chaque lettre en majuscule si minuscule */
char    to_uppercase(unsigned int i, char c)
{
        (void)i;  /* l'index n’est pas utilisé ici */
        if (c >= 'a' && c <= 'z')
                return (c - 32);
        return (c);
}

/* Callback : décalage du caractère selon son index */
char    shift_index(unsigned int i, char c)
{
        return (c + i);
}

int main(void)
{
        char *s1 = "piscine 42";
        char *s2 = "";
        char *s_null = NULL;
        char *res;

        /* --- Test classique --- */
        res = ft_strmapi(s1, to_uppercase);
        printf("Avant : %s\n", s1);
        printf("Après : %s\n\n", res);
        free(res);

        /* --- Test chaîne vide --- */
        res = ft_strmapi(s2, to_uppercase);
        printf("Chaîne vide avant : \"%s\"\n", s2);
        printf("Chaîne vide après : \"%s\"\n\n", res);
        free(res);

        /* --- Test s = NULL --- */
        res = ft_strmapi(s_null, to_uppercase);
        if (!res)
                printf("ft_strmapi(NULL) -> NULL (OK)\n\n");

        /* --- Test callback décalage index --- */
        char *s3 = "ABC";
        res = ft_strmapi(s3, shift_index);
        printf("Décalage index sur \"%s\" -> %s\n\n", s3, res);
        free(res);

        return (0);
}

