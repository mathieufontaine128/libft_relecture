/* Mains minimaux pour tester les fonctions Libft */

#include <bsd/string.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/* ====================== ft_atoi ====================== */
int	main(void)
{
	char	*s = "42";
	printf("%d | %d", ft_atoi(s), atoi(s));
	return (0);
}

/* ====================== ft_bzero ====================== */
int	main(void)
{
	char	a[5] = "aaaa";
	bzero(a, 2);
	printf("%s", a);
	return (0);
}

/* ====================== ft_calloc ====================== */
int	main(void)
{
	char	*p = ft_calloc(5, 1);
	if (p)
	{
		printf("%s
", p);
		free(p);
	}
	return (0);
}

/* ====================== ft_isalnum ====================== */
int	main(void)
{
	char	c = 'A';
	printf("%d | %d", ft_isalnum(c), isalnum(c));
	return (0);
}

/* ====================== ft_isalpha ====================== */
int	main(void)
{
	char	c = 'a';
	printf("%d | %d", ft_isalpha(c), isalpha(c));
	return (0);
}

/* ====================== ft_isascii ====================== */
int	main(void)
{
	char	c = 120;
	printf("%d | %d
", ft_isascii(c), isascii(c));
	return (0);
}

/* ====================== ft_isdigit ====================== */
int	main(void)
{
	char	c = '5';
	printf("%d | %d", ft_isdigit(c), isdigit(c));
	return (0);
}

/* ====================== ft_isprint ====================== */
int	main(void)
{
	char	c = 'A';
	printf("%d | %d", ft_isprint(c), isprint(c));
	return (0);
}

/* ====================== ft_memchr ====================== */
int	main(void)
{
	char	s[] = "hello";
	printf("%s | %s", (char *)ft_memchr(s, 'e', 5), (char *)memchr(s, 'e', 5));
	return (0);
}

/* ====================== ft_memcmp ====================== */
int	main(void)
{
	char	a[] = "abc";
	char	b[] = "abc";
	printf("%d | %d", ft_memcmp(a, b, 3), memcmp(a, b, 3));
	return (0);
}

/* ====================== ft_memcpy ====================== */
int	main(void)
{
	char	dst[10];
	char	src[] = "abc";
	ft_memcpy(dst, src, 4);
	printf("%s", dst);
	return (0);
}

/* ====================== ft_memmove ====================== */
int	main(void)
{
	char	s[] = "abcdef";
	ft_memmove(s + 2, s, 3);
	printf("%s", s);
	return (0);
}

/* ====================== ft_memset ====================== */
int	main(void)
{
	char	s[5] = "aaaa";
	ft_memset(s, 'b', 3);
	printf("%s", s);
	return (0);
}

/* ====================== ft_putchar_fd ====================== */
int	main(void)
{
	ft_putchar_fd('A', 1);
	return (0);
}

/* ====================== ft_putendl_fd ====================== */
int	main(void)
{
	ft_putendl_fd("hello", 1);
	return (0);
}

/* ====================== ft_putnbr_fd ====================== */
int	main(void)
{
	ft_putnbr_fd(42, 1);
	return (0);
}

/* ====================== ft_putstr_fd ====================== */
int	main(void)
{
	ft_putstr_fd("hello", 1);
	return (0);
}

/* ====================== ft_split ====================== */
int	main(void)
{
	char	**tab = ft_split("a:b:c", ':');
	int		 i = 0;
	while (tab && tab[i])
	{
		printf("%s", tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

/* ====================== ft_strchr ====================== */
int	main(void)
{
	char	s[] = "hello";
	printf("%s | %s", ft_strchr(s, 'e'), strchr(s, 'e'));
	return (0);
}

/* ====================== ft_strdup ====================== */
int	main(void)
{
	char	*p = ft_strdup("abc");
	printf("%s", p);
	free(p);
	return (0);
}

/* ====================== ft_striteri ====================== */
void	f(unsigned int i, char *c)
{
	(void)i;
	*c = 'X';
}
int	main(void)
{
	char	s[] = "abc";
	ft_striteri(s, f);
	printf("%s", s);
	return (0);
}

/* ====================== ft_strjoin ====================== */
int	main(void)
{
	char	*p = ft_strjoin("ab", "cd");
	printf("%s", p);
	free(p);
	return (0);
}

/* ====================== ft_strlcat ====================== */
int	main(void)
{
	char	dst[10] = "ab";
	printf("%zu | %zu", ft_strlcat(dst, "cd", 10), strlcat(dst, "cd", 10));
	return (0);
}

/* ====================== ft_strlcpy ====================== */
int	main(void)
{
	char	dst[10];
	printf("%zu | %zu", ft_strlcpy(dst, "abc", 10), strlcpy(dst, "abc", 10));
	return (0);
}

/* ====================== ft_strlen ====================== */
int	main(void)
{
	printf("%zu | %zu", ft_strlen("abc"), strlen("abc"));
	return (0);
}

/* ====================== ft_strmapi ====================== */
char	g(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}
int	main(void)
{
	char	*p = ft_strmapi("abc", g);
	printf("%s", p);
	free(p);
	return (0);
}

/* ====================== ft_strncmp ====================== */
int	main(void)
{
	printf("%d | %d
", ft_strncmp("abc", "abd", 3), strncmp("abc", "abd", 3));
	return (0);
}

/* ====================== ft_strnstr ====================== */
int	main(void)
{
	printf("%s | %s
", ft_strnstr("hello", "lo", 5), strnstr("hello", "lo", 5));
	return (0);
}

/* ====================== ft_strrchr ====================== */
int	main(void)
{
	printf("%s | %s", ft_strrchr("hello", 'l'), strrchr("hello", 'l'));
	return (0);
}

/* ====================== ft_strtrim ====================== */
int	main(void)
{
	char	*p = ft_strtrim("--abc--", "-");
	printf("%s", p);
	free(p);
	return (0);
}

/* ====================== ft_substr ====================== */
int	main(void)
{
	char	*p = ft_substr("hello", 1, 3);
	printf("%s", p);
	free(p);
	return (0);
}

/* ====================== ft_tolower ====================== */
int	main(void)
{
	printf("%c -> %c", 'A', ft_tolower('A'));
	return (0);
}

/* ====================== ft_toupper ====================== */
int	main(void)
{
	printf("%c -> %c", 'a', ft_toupper('a'));
	return (0);
}

