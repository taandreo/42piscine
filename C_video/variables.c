#include <stdio.h>

int	main (void)
{
	char c;
	c = 't';
	printf("%lu %d %c\n", sizeof(c), c, c);

	char c2;
	int i;
	float f;
	double d;

	printf("char: %lu, int: %lu, float: %lu, double: %lu\n", sizeof(c), sizeof(i), sizeof(f), sizeof(d));
}