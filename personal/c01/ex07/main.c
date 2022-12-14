#include <stdio.h>
#include "ft_rev_int_tab.c"

void	ft_rev_int_tab(int *tab, int size);

void	putarr(int arr[], int size)
{
	for (int i = 0; i < (size - 1); i++)
		printf("%d", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int size;

	size = 4;
	printf("Original : ");
	putarr(tab, size);

	printf("Modified : ");
	ft_rev_int_tab(tab, size);
	putarr(tab, size);
}
