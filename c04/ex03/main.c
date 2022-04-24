#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str);

int main(void)
{
	char *st1 = "678678";
	char *st2 = "---+9090";
	char *st3 = "2147483648";
	char *st4 = "--23648";

	printf("atoi: %i | ft_atoi: %i\n", atoi(st1), ft_atoi(st1));
	printf("atoi: %i | ft_atoi: %i\n", atoi(st2), ft_atoi(st2));
	printf("atoi: %i | ft_atoi: %i\n", atoi(st3), ft_atoi(st3));
	printf("atoi: %i | ft_atoi: %i\n", atoi(st4), ft_atoi(st4));
}