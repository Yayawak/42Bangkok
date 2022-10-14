#include <stdio.h>
#include "ft_putstr_non_printable.c"

int	main(void)
{
	/* char	*origin_str = "Coucou\\ntu vas bien ?"; */
	/* char	*want_str = "Coucou\\0atu vas bien ?"; */

	/* printf("Original string : %s\n\n", origin_str); */
	/* ft_putstr_non_printable(origin_str); */
	/* printf("\nWanted to be string : %s\n\n", want_str); */

	char	*str;

	str = "Bon		  \njo	\nur";
	ft_putstr_non_printable(str);

	return (0);
}
