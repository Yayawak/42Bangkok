#include <stdio.h>

int	main(void)
{
		char	*str;

		printf("Size of char * : %lu\n", sizeof(char *));
		printf("Size of char ** : %lu\n", sizeof(char **));
		char	arr[1000];
		printf("Size of str : %lu\n", sizeof(str));
		printf("Size of arr[1000] : %lu\n", sizeof(arr));
}
