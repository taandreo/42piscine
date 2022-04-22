#include <stdio.h>

int *func(void)
{
	int *p = NULL;
	return (p);
}

int main(void)
{
	printf("%ls \n", func());
}