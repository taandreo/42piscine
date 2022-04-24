#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int main(void)
{
	char chars[4];

	chars[0] = 0xC9;
	chars[1] = 0xD5;
	chars[2] = 0xA9;
	chars[3] = '\0';
	ft_putstr_non_printable(chars);
}
