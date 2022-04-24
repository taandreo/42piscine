// #include <string.h>
// #include <stdio.h>

// int ft_strcmp(char *s1, char *s2);
 
// void demo(char* lhs, char* rhs)
// {
//     int rc = ft_strcmp(lhs, rhs);
//     if(rc == 0)
//         printf("[%s] equals [%s]\n", lhs, rhs);
//     else if(rc < 0)
//         printf("[%s] precedes [%s]\n", lhs, rhs);
//     else if(rc > 0)
//         printf("[%s] follows [%s]\n", lhs, rhs);
 
// }
// int main(void)
// {
//     char* string = "Hello World!";
//     demo(string, "Hello!");
//     demo(string, "Hello");
//     demo(string, "Hello there");
//     demo("Hello, everybody!" + 12, "Hello, somebody!" + 11);
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	char *s1;
// 	char *s2;
// 	char *s3;
// 	char *s4;
// 	char *s5;
// 	char *s6;
// 	char *s8;

// 	s1 = calloc(10, sizeof(char));
// 	s2 = calloc(8, sizeof(char));
// 	s3 = calloc(10, sizeof(char));
// 	s4 = calloc(10, sizeof(char));
// 	s5 = calloc(10, sizeof(char));
// 	s6 = calloc(1, sizeof(char));
// 	s8 = calloc(6, sizeof(char));
// 	s1 = "abcdefghi";
// 	s2 = "abcdefg";
// 	s3 = "abcdEfghi";
// 	s4 = "ab0defghi";
// 	s5 = "abcdefghi"; // s5 is the same of s1
// 	s6 = "";
// 	s8 = "abcdf";
// 	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s, s6: %s\n", s1, s2, s3, s4, s5, s6);
// 	printf("ft_strcmp(s1, s2)\t= %d\noriginal strcmp(s1, s2)\t= %d\n------------------------------\n", ft_strcmp(s1, s2), strcmp(s1, s2));
// 	printf("ft_strcmp(s1, s3)\t= %d\noriginal strcmp(s1, s3)\t= %d\n------------------------------\n", ft_strcmp(s1, s3), strcmp(s1, s3));
// 	printf("ft_strcmp(s1, s4)\t= %d\noriginal strcmp(s1, s4)\t= %d\n------------------------------\n", ft_strcmp(s1, s4), strcmp(s1, s4));
// 	printf("ft_strcmp(s1, s5)\t= %d\noriginal strcmp(s1, s5)\t= %d\n------------------------------\n", ft_strcmp(s1, s5), strcmp(s1, s5));
// 	printf("ft_strcmp(s1, s6)\t= %d\noriginal strcmp(s1, s6)\t= %d\n------------------------------\n", ft_strcmp(s1, s6), strcmp(s1, s6));
// 	printf("ft_strcmp(s1, s8)\t= %d\noriginal strcmp(s1, 28)\t= %d\n------------------------------\n", ft_strcmp(s1, s8), strcmp(s1, s8));
// 	return(0);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1 = "banana";
	char *s2 = "macaco";

	printf("%i", ft_strcmp(s1, s2));
	return(0);
}