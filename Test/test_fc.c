/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: [TonNom]                                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13                                #+#    #+#             */
/*   Updated: 2025/11/14 02:05:23 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

int main(void)
{
    int fd;
    char *test_str = "Hello, Libft FD functions!";
    char *empty_str = "";
    int test_num = 12345;
    int neg_num = -6789;

    printf("===== TEST ft_putchar_fd =====\n");
    ft_putchar_fd('A', 1);
    ft_putchar_fd('\n', 1);

    printf("\n===== TEST ft_putstr_fd =====\n");
    ft_putstr_fd(test_str, 1);
    ft_putchar_fd('\n', 1);
    ft_putstr_fd(empty_str, 1);
    ft_putchar_fd('\n', 1);

    printf("\n===== TEST ft_putendl_fd =====\n");
    ft_putendl_fd(test_str, 1);
    ft_putendl_fd(empty_str, 1);

    printf("\n===== TEST ft_putnbr_fd =====\n");
    ft_putnbr_fd(test_num, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(neg_num, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);

    /* Bonus : test d'écriture dans un fichier */
    fd = open("fd_test_output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0)
    {
        perror("open");
        return (1);
    }
    ft_putendl_fd("Writing to a file using ft_putendl_fd:", fd);
    ft_putstr_fd(test_str, fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(test_num, fd);
    ft_putchar_fd('\n', fd);
    close(fd);

    printf("\n✅ FIN DES TESTS FT_***_FD (stdout + fichier)\n");
    return (0);
}

