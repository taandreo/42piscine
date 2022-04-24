#include <string.h>
#include <stdio.h>


char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src = "Test string";
	char	dest[6];

	char	*str;
	str = ft_strcpy(dest, src);
	
	printf("str:  %s\n", str);
	printf("dest: %s\n", dest);
}
