#include <string.h>
#include <stdio.h>

char *invert_str(char *str, int size)
{
	int n;
	int i;
	char tmp;

	i = 0;
	n = size - 2;
	while(i < n)
	{
		tmp = str[i];
		str[i] = str[n];
		str[n] = tmp;
		i++;
		n--;
	}
	return(str);
}

int main(void)
{
	char str[] = "teste";
	invert_str(str, 6);
	printf("%s\n", str);
	return (0);
}
