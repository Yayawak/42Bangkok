#include <stdio.h>
#include "ft_strupcase.c"

// error bus maybe char < 0 or char > 127
void	test_by_string(char *p_str)
{
	char	*upcase_str;

	upcase_str = my_ft_strupcase(p_str);
	/* upcase_str = ft_strupcase(p_str); */
	printf("Prev string %s\nPost upcase %s\n", p_str, upcase_str);
}

int	main(void)
{
	/* test_by_string("helloworld"); */
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	empty[] = " ";
	char	*p_lwr, *p_all, *p_emp;

	p_lwr = lowercase;
	p_all = allcases;
	p_emp = empty;

	printf("\nBefore upcase = %s\n", lowercase);
	printf("After upcase = %s\n", ft_strupcase(p_lwr));
	/* printf("After upcase = %s\n", ft_strupcase(lowercase)); */

	printf("\nBefore upcase = %s\n", allcases);
	printf("After upcase = %s\n", ft_strupcase(p_all));

	printf("\nBefore upcase = %s\n", empty);
	printf("After upcase = %s\n", ft_strupcase(p_emp));

	/* printf("\n---------\n%s = ", empty); */
	/* printf("%s\n", ft_strupcase(p_emp)); */
	test_by_string("i love guitar");
	test_by_string("hello my name is Jelley");
	test_by_string("hello world");
	return (0);
}
