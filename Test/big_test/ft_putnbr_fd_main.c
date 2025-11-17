#include <fcntl.h>
#include <unistd.h>
#include <limits.h>
#include "libft.h"

int main(void)
{
        int fd;

        /* --- Test sur la sortie standard --- */
        write(1, "Test STDOUT :\n", 15);

        ft_putnbr_fd(0, 1);
        write(1, "\n", 1);

        ft_putnbr_fd(42, 1);
        write(1, "\n", 1);

        ft_putnbr_fd(-42, 1);
        write(1, "\n", 1);

        ft_putnbr_fd(INT_MAX, 1);
        write(1, "\n", 1);

        ft_putnbr_fd(INT_MIN, 1);
        write(1, "\n", 1);

        /* --- Test avec un fd invalide --- */
        write(1, "\nTest FD invalide (aucune sortie attendue) :\n", 46);
        ft_putnbr_fd(12345, -1);   /* ne doit rien afficher */

        /* --- Test avec un fichier --- */
        write(1, "\nEcriture dans test.txt :\n", 27);

        fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
        if (fd < 0)
        {
                write(1, "Erreur ouverture fichier\n", 25);
                return (1);
        }

        ft_putnbr_fd(123456, fd);
        write(1, " -> écrit dans test.txt\n", 25);

        close(fd);

        return (0);
}
