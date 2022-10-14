#include <stdio.h>
#include "ft_str_is_uppercase.c"

void	test_by_string(char *p_str)
{
	int	result;

	/* result = ft_str_is_uppercase(p_str); */
	result = ft_str_is_uppercase(p_str);
	printf("String %s : is_uppercase ? %d\n", p_str, result);
}

int	main(void)
{
	char *str1 = "fffffgggiii";
	char *str2 = "ZADFGETVG";
	char *str3 = "ZAafsdfTT";	

	test_by_string(str1);
	test_by_string(str2);
	test_by_string(str3);
	return (0);
}
