#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char buf1[20], buf2[20], src[20] = "123456789";
    int res1, res2;
    char *ptr1, *ptr2;

    printf("===== Tests ft_mem* =====\n\n");

    // ----- ft_memset -----
    strcpy(buf1, "AAAAA");
    strcpy(buf2, "AAAAA");
    memset(buf1, 'X', 3);
    ft_memset(buf2, 'X', 3);
    printf("ft_memset : %s | attendu : %s\n", buf2, buf1);

    // ----- ft_bzero -----
    strcpy(buf1, "ABCDE");
    strcpy(buf2, "ABCDE");
    bzero(buf1, 3);
    ft_bzero(buf2, 3);
    printf("ft_bzero : ");
    for (int i = 0; i < 5; i++)
        printf("%c", buf2[i] ? buf2[i] : '0');
    printf(" | attendu : ");
    for (int i = 0; i < 5; i++)
        printf("%c", buf1[i] ? buf1[i] : '0');
    printf("\n");

    // ----- ft_memcpy -----
    char dest1[10] = "OOOOO", dest2[10] = "OOOOO";
    memcpy(dest1, src, 4);
    ft_memcpy(dest2, src, 4);
    printf("ft_memcpy : %s | attendu : %s\n", dest2, dest1);

    // ----- ft_memmove -----
    char overlap1[20] = "123456789", overlap2[20] = "123456789";
    memmove(overlap1+2, overlap1, 5);
    ft_memmove(overlap2+2, overlap2, 5);
    printf("ft_memmove : %s | attendu : %s\n", overlap2, overlap1);

    // ----- ft_memchr -----
    ptr1 = memchr(src, '5', 9);
    ptr2 = ft_memchr(src, '5', 9);
    printf("ft_memchr : %c | attendu : %c\n", ptr2 ? *ptr2 : '0', ptr1 ? *ptr1 : '0');

    // ----- ft_memcmp -----
    char cmp1[] = "ABCDEF", cmp2[] = "ABCDXY";
    res1 = memcmp(cmp1, cmp2, 6);
    res2 = ft_memcmp(cmp1, cmp2, 6);
    printf("ft_memcmp : %d | attendu : %d\n", res2, res1);

    // ----- Cas limite : n == 0 -----
    printf("ft_memcpy(NULL,NULL,0) = %p\n", ft_memcpy(NULL, NULL, 0));

    return 0;
}

