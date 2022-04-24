#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char *p;
	// char str[] = "According to the Lithuanian defense minister there were a total of 485 crew members on board including 66 officers.";
	char str[] = "";
	char to_find[] = "";
	p = ft_strstr(str, to_find);
	printf("string: %s\n", p);
	printf("string: %p\n", p);
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char	*ft_strstr(char *str, char *to_find);

// int	main(void)
// {
// 	char *str;
// 	char *to_find;
// 	char *buff;
// 	char *ft_buff;

// 	str = strcpy(calloc(11, sizeof(char)), "alo galera");
// 	to_find = strcpy(calloc(7, sizeof(char)), "galera");
// 	buff = strstr(str, to_find);
// 	ft_buff = ft_strstr(str, to_find);
// 	if (buff != ft_buff)
// 		printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
// 	else
// 		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
// 	str = strcpy(calloc(11, sizeof(char)), "alo galera");
// 	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
// 	buff = strstr(str, to_find);
// 	ft_buff = ft_strstr(str, to_find);
// 	if (buff != ft_buff)
// 		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
// 	else
// 		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
// 	str = strcpy(calloc(11, sizeof(char)), "alo galera");
// 	to_find = strcpy(calloc(1, sizeof(char)), "");
// 	buff = strstr(str, to_find);
// 	ft_buff = ft_strstr(str, to_find);
// 	if (buff != ft_buff)
// 		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
// 	else
// 		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
// 	return (0);
// }