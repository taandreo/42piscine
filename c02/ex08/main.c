#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char *str2;
	char str[] = "TTTYYYYsppppasdasd,,,;;;;;[[[][]";
	str2 = ft_strlowcase(str);
	printf("%s\n", str);
	printf("%s\n", str2);
}
