/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: [TonNom]                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13                                #+#    #+#             */
/*   Updated: 2025/11/14 01:52:07 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    char *s1 = "HelloWorld";
    char *s2 = "42School";
    char sep[] = "-";
    char *dup;
    char *substr;
    char *trim;
    char **split;
    char itoa_res[12];
    int i;

    printf("===== ft_strlen =====\n");
    printf("strlen: %zu | ft_strlen: %d\n\n", strlen(s1), ft_strlen(s1));

    printf("===== ft_strchr =====\n");
    printf("strchr 'o': %s | ft_strchr 'o': %s\n\n",
           strchr(s1, 'o'), ft_strchr(s1, 'o'));

    printf("===== ft_strdup =====\n");
    dup = ft_strdup(s1);
    printf("strdup: %s | ft_strdup: %s\n\n", s1, dup);
    free(dup);

    printf("===== ft_strncmp =====\n");
    printf("strncmp: %d | ft_strncmp: %d\n\n",
           strncmp("ABC", "ABD", 3), ft_strncmp("ABC", "ABD", 3));

    printf("===== ft_strlcpy =====\n");
    char buf1[10], buf2[10];
    strlcpy(buf1, s1, sizeof(buf1));
    ft_strlcpy(buf2, s1, sizeof(buf2));
    printf("strlcpy: %s | ft_strlcpy: %s\n\n", buf1, buf2);

    printf("===== ft_strlcat =====\n");
    char buf3[15] = "Hi";
    char buf4[15] = "Hi";
    strlcat(buf3, s2, sizeof(buf3));
    ft_strlcat(buf4, s2, sizeof(buf4));
    printf("strlcat: %s | ft_strlcat: %s\n\n", buf3, buf4);

    printf("===== ft_strjoin =====\n");
    char *joined = ft_strjoin(s1, s2);
    printf("ft_strjoin: %s\n\n", joined);
    free(joined);

    printf("===== ft_substr =====\n");
    substr = ft_substr(s1, 2, 5);
    printf("ft_substr: %s\n\n", substr);
    free(substr);

    printf("===== ft_strtrim =====\n");
    char totrim[] = "  ++Hello42--  ";
    trim = ft_strtrim(totrim, " +-");
    printf("ft_strtrim: '%s'\n\n", trim);
    free(trim);

    printf("===== ft_split =====\n");
    char text[] = "abc def  ghi";
    split = ft_split(text, ' ');
    i = 0;
    while (split[i])
    {
        printf("split[%d]: '%s'\n", i, split[i]);
        free(split[i]);
        i++;
    }
    free(split);
    printf("\n");

    printf("===== ft_itoa =====\n");
    char *itoa_res1 = ft_itoa(12345);
    char *itoa_res2 = ft_itoa(-6789);
    char *itoa_res3 = ft_itoa(0);
    printf("ft_itoa 12345: %s\n", itoa_res1);
    printf("ft_itoa -6789: %s\n", itoa_res2);
    printf("ft_itoa 0: %s\n", itoa_res3);
    free(itoa_res1);
    free(itoa_res2);
    free(itoa_res3);

    printf("===== FIN DES TESTS ft_str* =====\n");
    return 0;
}

