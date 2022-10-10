#include "ft_ultimate_ft.c"
#include <stdio.h>

int	main(void)
{
	int nb;
	int	*p_nb0;
	int	**p_nb1;
	int ***p_nb2;
	int ****p_nb3;
	int *****p_nb4;
	int ******p_nb5;
	int *******p_nb6;
	int ********p_nb7;
	int *********p_nb8;

	nb = 21;
	p_nb0 = &nb;
	p_nb1 = &p_nb0;
	p_nb2 = &p_nb1;
	p_nb3 = &p_nb2;
	p_nb4 = &p_nb3;
	p_nb5 = &p_nb4;
	p_nb6 = &p_nb5;
	p_nb7 = &p_nb6;
	p_nb8 = &p_nb7;


	//ft_ultimate_ft(nb);
	printf("%d\n", nb);
	ft_ultimate_ft(p_nb8);
	printf("%d\n", nb);
	printf("%d\n", *********p_nb8);
	printf("%p\n", &p_nb0);
	return (0);
}
