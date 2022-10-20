#include <stdio.h>
#include <string.h>
#include "ft_atoi.c"

int	main(void)
{
		char	*s1 = "+---+1234ab567";
		char	*s2 = "-------+---+1234ab567";
		char	*s3 = "\t+ -+--1234ab567";

		/* char	x = '\t'; */
		char	x = ' ';
		printf("Dec ascii of %c = %d\n", x, x);
		printf("Is '%c' space ? \t, %d", x, ft_isspace(x));
		printf("\n\n");

		printf("Number before atoi = %s\n", s1);
		printf("Number before atoi = %d\n\n", ft_atoi(s1));

		printf("Number after atoi = %s\n", s2);
		printf("Number after atoi = %d\n\n", ft_atoi(s2));

		printf("Number after atoi = %s\n", s3);
		printf("Number after atoi = %d\n\n", ft_atoi(s3));
		return (0);
}
