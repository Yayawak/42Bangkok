#include <stdio.h>
#include <string.h>
#include "ft_convert_base.c"

void	test_result(char *nbr, char *base_from, char *base_to)
{
				printf("From original number $%s$\n", nbr);
				printf("\tresult : $%s$\n\n", ft_convert_base(nbr, base_from, base_to));
}

int	main(void)
{
				char	*base_16 = "0123456789abcdef";
				char	*base_10 = "0123456789";
				char	*base_8 = "01234567";
				char	*base_3 = "012";
				char	*base_2 = "01";

				/* printf("result : $%s$\n", ft_convert_base("117584391", base_10,base_16)); */
				test_result("12", base_10, base_16);
				test_result("12", base_10, base_2);
				/* test_result("120", base_10, base_16); */
				return (0);
}
