#include <stdio.h>
#include <string.h>
#include "ft_str_is_numeric.c"

void	test_by_string(char *p_str)
{
	int	result;

	result = ft_str_is_numeric(p_str);
	printf("String %s : is_num ? %d\n", p_str, result);
}
int	main(void)
{

	char *str1 = "fffffgggiii";
	char *str2 = "999345859";
	char *str3 = "dkfdf9911";

	test_by_string(str1);
	test_by_string(str2);
	test_by_string(str3);
	return (0);
}
