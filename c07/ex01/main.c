#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int min = 4;
	int max = 333;
	int size;

	size  = max - min + 1;
	int i = 0;
	int *range;
	range = ft_range(min, max);

	while(i < size)
	{
		printf("%i, ", range[i]);
		i++;
	}
	printf("\n");
}
