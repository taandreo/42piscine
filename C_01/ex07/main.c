#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int size = 10;
	int	tab[size];
	int i;

	i = 0;

	while(i < size)
	{
		tab[i] = i;
		i ++;
	}

	i = 0;
	// before
	while(i < size)
	{
		printf("%i, ", tab[i]);
		i++;
	}

	printf("\n");
	ft_rev_int_tab(tab, size);

	i = 0;
	
	// after
	while(i < size)
	{
		printf("%i, ", tab[i]);
		i++;
	}
}
