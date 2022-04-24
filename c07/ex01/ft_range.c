#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *buffer;
	int range;
	int i;

	i = 0;
	if (min > max)
		return (0);
	if (max > 2147483647)
		return (0);
	range = max - min + 1;
	buffer = malloc(range * sizeof(int));
	if (!buffer)
		return (0);
	while(min <= max)
	{
		buffer[i] = min;
		min++;
		i++;
	}
	return(buffer);
}