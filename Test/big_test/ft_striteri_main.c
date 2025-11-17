#include <stdio.h>
#include "libft.h"

/* Fonction utilisée par ft_striteri :
   Ici on transforme chaque caractère en majuscule. */
void    to_uppercase(unsigned int i, char *c)
{
        (void)i;             /* l’index n’est pas utilisé ici */
        if (*c >= 'a' && *c <= 'z')
                *c = *c - 32;
}

/* Autre fonction : afficher l'index et le caractère */
void    debug_iter(unsigned int i, char *c)
{
        printf("Index %u -> %c\n", i, *c);
}

int main(void)
{
        char s1[] = "piscine 42";
        char s2[] = "";
        char *s_null = NULL;

        /* --- Test classique --- */
        printf("Avant : %s\n", s1);
        ft_striteri(s1, to_uppercase);
        printf("Après : %s\n\n", s1);   /* attendu : "PISCINE 42" */

        /* --- Test chaîne vide --- */
        printf("Test chaîne vide :\n");
        ft_striteri(s2, to_uppercase);  /* ne doit rien faire */
        printf("Après : \"%s\"\n\n", s2);

        /* --- Test s = NULL --- */
        printf("Test NULL (pas de crash attendu) :\n");
        ft_striteri(s_null, to_uppercase);
        printf("OK\n\n");

        /* --- Test debug (affichage index + char) --- */
        char s3[] = "ABC";
        printf("Debug iter sur \"%s\" :\n", s3);
        ft_striteri(s3, debug_iter);
        printf("\n");

        return (0);
}

