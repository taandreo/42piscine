#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	// Compara a string somente até o byte
	// char	*s1 = "abcdefghi";
	// char	*s2 = "abcdEfghi";
	char	*s1 = "";
	char	*s2 = "abcdEfghi";
	int res;
	int ft_res;
	int n;

	n = 4;
	res = strncmp(s1, s2, n);
	ft_res = ft_strncmp(s1, s2, n);
	printf("%i\n", res);
	printf("%i\n", ft_res);
}
