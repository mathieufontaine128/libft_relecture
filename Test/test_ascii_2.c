#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
    int c = -1;      // commence un peu avant la plage ASCII
    int end = 130;   // un peu après la plage ASCII

    printf("===== Tests ft_is* et ft_to* avec contrôle des limites =====\n\n");

    while (c <= end)
    {
        printf("char code: %3d | ", c);

        // is*
        printf("isalpha: %d | ft_isalpha: %d, ", isalpha(c), ft_isalpha(c));
        printf("isdigit: %d | ft_isdigit: %d, ", isdigit(c), ft_isdigit(c));
        printf("isalnum: %d | ft_isalnum: %d, ", isalnum(c), ft_isalnum(c));
        printf("isascii: %d | ft_isascii: %d, ", isascii(c), ft_isascii(c));
        printf("isprint: %d | ft_isprint: %d\n", isprint(c), ft_isprint(c));

        // toupper / tolower
        printf("toupper: %3c | ft_toupper: %3c, ", toupper(c), ft_toupper(c));
        printf("tolower: %3c | ft_tolower: %3c\n\n", tolower(c), ft_tolower(c));

        c++;
    }

    return 0;
}

