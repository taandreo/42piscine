// #include <string.h>
// #include <stdio.h>

// unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

// int	main(void)
// {
// 	int		size;
// 	char	src[] = "teste";
// 	// src[0] = '\0';
// 	char dest[6];

// 	size = ft_strlcpy(dest, src, 5);
// 	printf("dest: %s size: %i\n", dest, size);
// }

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	int 	src_size;
	char 	*src = "9VpPiFVXRkwvtNQsH";

	src = calloc(18, sizeof(char));
	char dest[] = "strinasdfasdfasdf";
	src = "string";
	src_size = ft_strlcpy(dest, src, 4);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	return(0);
}