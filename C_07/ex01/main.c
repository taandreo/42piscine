#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int i = 0;
	int *range;
	range = ft_range(3, 333);

	while(i < 333 - 3)
	{
		printf("%i, ", range[i]);
		i++;
	}
	printf("\n");
}
