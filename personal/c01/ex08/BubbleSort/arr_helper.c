#include <stdio.h>

int	get_arr_len(int *list)
{
	int	len;
	/* len = (int)(sizeof(list) / sizeof(list[0])); */
	/* len = (int)(sizeof(list) / sizeof(int)); */
	len = (int)(sizeof(list) / 2);
	return len;
}
void	read_list(int list[], int n)
{
	printf("Enter the elements\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &list[i]);
	}
		/* *list[i] = sca */
}

void	print_list(int list[], int n)
{
	printf("The elements of the list are : \n");
	for (int i = 0; i < n; i++)
		printf("%d\t", list[i]);
	printf("\n");
}
