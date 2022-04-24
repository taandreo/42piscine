#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *buffer;
	int range;
	int i;

	if (min > max)
		return (0);
	if (max > 2147483647)
		return (0);
	range = max - min;
	buffer = malloc(range * sizeof(int));
	if (!buffer)
		return (0);
	while(i < range)
	{
		buffer[i] = min;
		min++;
		i++;
	}
	return(buffer);
}