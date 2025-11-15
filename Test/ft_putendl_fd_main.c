#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

int main(void)
{
        int fd;

        /* --- Tests sur la sortie standard --- */
        write(1, "Test STDOUT :\n", 15);

        ft_putendl_fd("Hello world", 1);
        ft_putendl_fd("Piscine 42", 1);
        ft_putendl_fd("", 1);             /* chaîne vide */
        ft_putendl_fd("Test fin de ligne", 1);

        /* --- Test avec s = NULL --- */
        write(1, "\nTest NULL (ne doit rien afficher) :\n", 38);
        ft_putendl_fd(NULL, 1);

        /* --- Test fd invalide --- */
        write(1, "\nTest FD invalide (ne doit rien afficher) :\n", 46);
        ft_putendl_fd("Ceci ne doit pas s'afficher", -1);

        /* --- Test écriture dans un fichier --- */
        write(1, "\nEcriture dans test_putendl.txt :\n", 34);

        fd = open("test_putendl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
        if (fd < 0)
        {
                write(1, "Erreur ouverture fichier\n", 25);
                return (1);
        }

        ft_putendl_fd("Ligne 1", fd);
        ft_putendl_fd("Ligne 2", fd);
        ft_putendl_fd("Ligne 3", fd);

        close(fd);

        write(1, " -> écrit dans test_putendl.txt\n", 33);

        return (0);
}

