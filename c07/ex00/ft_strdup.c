#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strdup(char *src)
{
	int len;
	char *dest;

	len = ft_strlen(src);
	dest = malloc(len + 1 * sizeof(char) + 1);
	if (!dest)
		return (0);		
	return(ft_strcpy(dest, src));
}