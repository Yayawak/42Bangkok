#include <stdio.h>
#include "ft_strcat.c"

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	/* char	*a = "Levi "; */
	/* char	*b = "Ackerman."; */
	char	a[20] = "Levi ";
	char	b[] = "Ackerman.";

	printf("str_a = %s\nstr_b = %s\n", a, b);
	ft_strcat(a, b);
	/* ft_strcat(a, b); */
	//strcat(a, b);
	printf("After concatination.\n");
	printf("str_c = %s\n\t", a);
	/* printf("concated str = %s\n\t", ft_strcat(a, b)); */
	return (0);
}
