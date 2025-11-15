#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	int i = 0;
	const char *tests[] =
	{
	"Hello World",
	"",
	"   ",
	"Test\nTab\t!",
	"Hello\0cache",
	};
	while (i < 5)
	{
		size_t res_ft = ft_strlen(tests[i]);
		size_t res_std = strlen(tests[i]);
		printf("ft_strlen(\"%s\") -> %zu | strlen -> %zu\n",
		tests[i], res_ft, res_std);
		i++;
	}

	return 0;
}
