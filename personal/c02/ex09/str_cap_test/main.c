#include <stdio.h>
#include "ft_strcapitalize.c"

int	main(void)
{
	char	prev_str[] = "isalut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Prev String is \n%s\n\n", prev_str);
	printf("Post String is \n%s\n", ft_strcapitalize(prev_str));

	/* printf("Test helper functions\n "); */
	/* char	l = 'l'; */
	/* printf("l is lowercase ?, %d\n", is_lowercase('l')); */
	return (0);
}
