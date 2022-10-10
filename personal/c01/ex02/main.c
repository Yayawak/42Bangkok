#include <stdio.h>
#include "ft_swap.c"

int	main(void)
{
	int x, y;

	printf("Enter value of a : ");
	scanf("%d", &x);
	printf("Enter value of b : ");
	scanf("%d", &y);
	printf("A,B before swap : %d,%d\n", x, y);
	ft_swap(&x, &y);
	printf("A,B before swap : %d,%d\n", x, y);
	return (0);
}
