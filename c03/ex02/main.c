#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	// Concatena duas strings e zera o final
	char *dst;
	char src[] = "test";
	char *str;

	dst = calloc(20, sizeof(char));
	strcpy(dst, "LLL");
	str = ft_strcat(dst, src);
	printf("%s\n", str);
}
