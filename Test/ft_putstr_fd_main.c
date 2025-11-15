#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
        int fd;

        /* --- Tests sur la sortie standard --- */
        write(1, "Test STDOUT :\n", 15);

        ft_putstr_fd("Hello world", 1);
        write(1, "\n", 1);

        ft_putstr_fd("Piscine 42", 1);
        write(1, "\n", 1);

        ft_putstr_fd("", 1);  /* chaîne vide */
        write(1, "\n", 1);

        /* --- Test s = NULL --- */
        write(1, "\nTest NULL (ne doit rien afficher) :\n", 38);
        ft_putstr_fd(NULL, 1);    /* avec ta protection -> output vide */
        write(1, "\n", 1);

        /* --- Test fd invalide --- */
        write(1, "\nTest FD invalide (ne doit rien afficher) :\n", 46);
        ft_putstr_fd("Ceci ne doit pas s'afficher", -1);

        /* --- Test écriture dans un fichier --- */
        write(1, "\nEcriture dans test_putstr.txt :\n", 33);

        fd = open("test_putstr.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
        if (fd < 0)
        {
                write(1, "Erreur ouverture fichier\n", 25);
                return (1);
        }

        ft_putstr_fd("Ligne 1", fd);
        write(fd, "\n", 1);
        ft_putstr_fd("Ligne 2", fd);
        write(fd, "\n", 1);

        close(fd);

        write(1, " -> écrit dans test_putstr.txt\n", 32);

        return (0);
}

