#include <stdio.h>
#include "ft_strncat.c"

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	/* char	*a = "Levi "; */
	/* char	*b = "Ackerman."; */
	char	a[20] = "Levi_";
	char	b[] = "Ackerman.";

	printf("str_a = %s\nstr_b = %s\n", a, b);
	ft_strncat(a, b, 5);
	//strcat(a, b);
	printf("after concated.\n");
	printf("str_c = %s\n", a);
	/* printf("concated str = %s\n\t", ft_strcat(a, b)); */
	return (0);
}
