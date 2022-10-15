#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int	main(void)
{
	char	*a = "Levi Ackerman.";
	/* char	*b = "Acker twitter"; */
	/* char	*b = "Acker"; */
	char	*b = "";
	/* char	*a = "Foo Bar Baz."; */
	/* char	*b = "Bar"; */
	char	*p;

	p = ft_strstr(a, b);
	/* p = strstr(a, b); */

	printf("a string = %s\n", a);
	printf("b string = %s\n", b);

	printf("Final value\n");
	printf("c string = %s\n", p);
	return (0);
}
