#include <stdio.h>
#include "ft_strlen.c"

int	main(void)
{
	char	str[15];
	char	*first_pointer;
	int	length;

	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = 'l';
	str[4] = 'o';
	str[5] = ' ';
	str[6] = 'W';
	str[7] = 'o';
	str[8] = 'r';
	str[9] = 'l';
	str[10] = 'd';
	str[11] = ' ';
	str[12] = '4';
	str[13] = '2';
	str[14] = '\0';
	first_pointer = &str[0];
	/* length = ft_strlen(str); */
	length = ft_strlen(first_pointer);
	/* int	length_2 = ft_strlen(first_pointer); */
	printf("length of %d\n", length);
	return (0);
}
