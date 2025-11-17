#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
        int fd;

        /* --- Tests sur STDOUT --- */
        write(1, "Test STDOUT :\n", 15);

        ft_putchar_fd('A', 1);
        ft_putchar_fd('\n', 1);

        ft_putchar_fd('4', 1);
        ft_putchar_fd('\n', 1);

        ft_putchar_fd('z', 1);
        ft_putchar_fd('\n', 1);

        /* --- Test caractère spécial --- */
        write(1, "\nCaractère special :\n", 22);
        ft_putchar_fd('\t', 1);
        ft_putchar_fd('\n', 1);

        /* --- Test FD invalide --- */
        write(1, "\nTest FD invalide (ne doit rien afficher) :\n", 46);
        ft_putchar_fd('X', -1);

        /* --- Test écriture dans un fichier --- */
        write(1, "\nEcriture dans test_putchar.txt :\n", 34);

        fd = open("test_putchar.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
        if (fd < 0)
        {
                write(1, "Erreur ouverture fichier\n", 25);
                return (1);
        }

        ft_putchar_fd('H', fd);
        ft_putchar_fd('i', fd);
        ft_putchar_fd('!', fd);
        ft_putchar_fd('\n', fd);

        close(fd);

        write(1, " -> écrit dans test_putchar.txt\n", 33);

        return (0);
}

