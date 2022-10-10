#include <stdio.h>
#include "ft_ft.c"

int	main(void)
{
	int	*p_nbr;
	int	nbr;

	nbr = 21;
	p_nbr = &nbr;

	
	printf("%d\n", nbr);
	ft_ft(p_nbr);
	printf("%d\n", nbr);

	ft_ft(&nbr);
	*p_nbr = 99;
	printf("%d\n", nbr);

	return (0);
}
