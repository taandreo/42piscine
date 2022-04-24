#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	int i;

	i = ft_str_is_printable("   123123123VIIII***_ *~I");
	printf("%i\n", i);
}
