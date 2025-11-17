#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "libft.h"

int main(void)
{
    const char *tests[] = {
        "0",
        "42",
        "-42",
        "   123",
        "\t\n 456",
        "2147483647",
        "-2147483648",
        "9999999999",
        "-9999999999",
        "abc123",
        "123abc",
        "",
        NULL
    };

    int     i;
    int     res_ft;
    int     res_std;

    i = 0;
    while (tests[i])
    {
        res_ft = ft_atoi(tests[i]);
        res_std = atoi(tests[i]);

        printf("Test \"%s\" : ft_atoi -> %d | atoi -> %d\n",
            tests[i], res_ft, res_std);

        i++;
    }
    return (0);
}

