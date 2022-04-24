#include <string.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	int re;
	char *dest;
	dest = strcpy(calloc(11, sizeof(char)), "abacate");
	re = ft_strlcat(dest, "999", 12);
	printf("%s\n", dest);
	printf("%i\n", re);
}