#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int c = 0;
	int d = 0;

	printf("c: %i d: %i\n", c, d);
	ft_div_mod(12, 9, &c, &d);
	printf("c: %i d: %i\n", c, d);
}