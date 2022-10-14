#include <stdio.h>
#include <string.h>
#include "ft_strcpy.c"

int	main(void)
{
	char	*src;
	char	dest[12];

	src = "Hello world";
	printf("base : %s\n", src);

	ft_strcpy(dest, src);
	printf("ft_strcpy  : %s\n", dest);

	/* strcpy(dest, src); */
	/* printf("strcpy  : %s\n", dest); */
	return (0);
}
