#include <stdio.h>
#include <string.h>
#include "ft_strlcat.c"

int	main(void)
{
	/* char	*a = "Levi Ackerman."; */
//                   0123456789
	char	a[40] = "Levi Ackerman.";
//                   012345
	char	*b = 	"Buyer.";
	/* char	*b = "Acker"; */
	/* char	*b = ""; */
	/* char	*a = "Foo Bar Baz."; */
	/* char	*b = "Bar"; */
	unsigned int	l;

	l = ft_strlcat(a, b, 3);
	/* p = strstr(a, b); */

	printf("a string = %s\n", a);
	printf("b string = %s\n", b);

	printf("Dest After concated with n = %d bytes\n", l);
	printf("c string = %s\n", a);
	return (0);
}
