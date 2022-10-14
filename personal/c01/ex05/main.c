#include <stdio.h>
#include "ft_putstr.c"

int	main(void)
{
	char	str[] = "Hello, world!";
	char	*p_str;

	p_str = str;
	ft_putstr(p_str);
}
