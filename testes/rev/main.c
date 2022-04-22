#include <stdio.h>

void rev(int *mt, int size);

int main()
{
	int i;
	int mt[] = {0,1,2,3,4,5};
	
	i = 0;
	while (i < 6)
	{
		printf("%i ", mt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	rev(mt, 6);

	while (i < 6)
	{
		printf("%i ", mt[i]);
		i++;
	}
	printf("\n");
}

void rev(int *mt, int size)
{
	int i;
	int n;
	int tmp;

	i = 0;
	n = size - 1;
	while(i < n)
	{
		tmp = mt[i];
		mt[i] = mt[n];
		mt[n] = tmp;
		i++;
		n--;
	}
}
