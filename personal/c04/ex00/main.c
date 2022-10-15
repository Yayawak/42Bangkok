#include <stdio.h>
#include <string.h>
#include "ft_strlen.c"

int	main(void)
{
		char *str = "Here's how it should be prototyped.";


		printf("len of \"%s\"\n\n", str);

		printf("My builted function : \n");
		printf("With length of %d\n", ft_strlen(str));

		printf("Original function : \n");
		printf("With length of %d", ft_strlen(str));

	return (0);
}
