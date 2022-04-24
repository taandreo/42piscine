#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
	char *src = "abacate";
	char *dst;

	dst = ft_strdup(src);

	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
}