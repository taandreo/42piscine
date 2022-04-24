#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int size = 5;
	
	int tab[size];
	
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 1;
	tab[3] = 2;
	tab[4] = -1;

	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
