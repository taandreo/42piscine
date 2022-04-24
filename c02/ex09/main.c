// #include <stdio.h>

// char	*ft_strcapitalize(char *str);

// int main(void)
// {
// 	char *str2;
// 	char str[] = "5tpUb{2%za{ra+;KnTrt'TQ_Gi>foj~gu,e>o(zvz";
// 	str2 = ft_strcapitalize(str);
// 	printf("%s\n", str);
// 	printf("%s\n", str2);
// }


// 5tpUb{2%za{ra+;KnTrt'TQ_Gi>foj~gu,e>o(ZVZ

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str1[] = "alo maluco 42beleza!";
	char str2[] = "ALO MALUCO 42BELEZA!";
	char str3[] = "alo+ma|uco a2beleza!";
	char str4[] = "ALO+MALUCO*a2BELEZA!";
	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";
	char str7[] = ",5tpab{2%za{ra+;kntrt'tq_gi>foj~gu,e>o(zvz";


	printf("str1: %s\n", str1);
	ft_strcapitalize(str1);
	printf("str1_c: %s\n", str1);
	printf("str2: %s\n", str2);
	ft_strcapitalize(str2);
	printf("str2_c: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strcapitalize(str3);
	printf("str3_c: %s\n", str3);
	printf("str4: %s\n", str4);
	ft_strcapitalize(str4);
	printf("str4_c: %s\n", str4);
	printf("str5: %s\n", str5);
	ft_strcapitalize(str5);
	printf("str5_c: %s\n", str5);
	printf("str6: %s\n", str6);
	ft_strcapitalize(str6);
	printf("str6_c: %s\n", str6);
	printf("str7: %s\n", str7);
	ft_strcapitalize(str7);
	printf("str7_c: %s\n", str7);
	return (0);
}