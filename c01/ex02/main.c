#include <stdio.h>

void ft_swap(int *a, int *b);

int		main(void)
{
	int a  = 7;
	int b  = 3;
	int *c = &a;
	int *d = &b;

	printf("a: %i b: %i\n", a, b);
	ft_swap(&a, &b);
	printf("a: %i b: %i\n", a, b);
}

