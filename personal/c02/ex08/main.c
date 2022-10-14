#include <stdio.h>
#include "ft_strlowcase.c"

// error bus maybe char < 0 or char > 127
void	test_by_string(char *p_str)
{
	printf("\nBefore lower = %s\n", p_str);
	printf("After lower = %s\n", ft_strlowcase(p_str));
}

int	main(void)
{
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	test_by_string(upper);
	test_by_string(allcases);
	test_by_string("i love guitar");
	test_by_string("hello my name is Jelley");
	test_by_string("hello world");
	return (0);
}
