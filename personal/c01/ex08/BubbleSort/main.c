#include <stdio.h>
#include "arr_helper.c"
#include "bubble_sort.c"

int	main(void)
{
	int	arr[] = {23, 5, 4, 9, 1};
	int	n;

	n = get_arr_len(arr);

	printf("Length of array is %d\n", n);
	print_list(arr, n);

	b_sort(arr, n);
	print_list(arr, n);
	return (0);
}
