#include "ft_div_mod.c"
#include <stdio.h>

int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(7, 4, &div, &mod);
	printf("Div : %d, Mod %d\n", div, mod);
	return (0);
}
