#include <stdio.h>
#include <stdlib.h>

void ft_ft(int *nbr);

int	main(void)
{
	// int t = 42;
	char c = 'a';

	// int *p = &t;
	char *p1 = &c;
	ft_ft(&t);
	// printf("%i\n", t);
	// printf("num: %i\nsize: %li\n", t, sizeof(t));
	
	// printf("char: %c\nsize: %li\n", c, sizeof(c));
	
	// printf("pont: %p\nsize: %li\n", p, sizeof(p));
	// printf("pont: %i\nsize: %li\n", *p, sizeof(p));
	
	printf("pont: %p\nsize: %li\n", p1, sizeof(p1));
	printf("pont: %c\nsize: %li\n", *p1, sizeof(*p1));
}

// | 0bytes | 1bytes | 2bytes | 3bytes
// | 0bytes | 