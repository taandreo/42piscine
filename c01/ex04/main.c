#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a = 12;
	int b = 10;
	
	ft_ultimate_div_mod(&a, &b);
	printf("div: %i rest: %i\n", a, b);

	return(0);
}