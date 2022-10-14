#include <stdio.h>
#include "ft_print_memory.c"

int	main(void)
{
	int	i;
	char	str[] = "iBonjour les amiseeeeeee\neeeeeeeedwadwadawdadwadwegfrsdhgrtdhtrdharewfwafwafeawfwFAWFAGAWGRESHSERHEStrgesgresgrtdhtyjreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	char	str_2[] = "Turn in your assignment in your Git repository as usual. Only the work inside your repos- itory will be evaluated during the defense. Don’t hesitate to double check the names of your files to ensure they are correct.";

	i = 150;

	ft_print_memory(str, i);
	printf("\n\n");
	ft_print_memory(str_2, i);
	return (0);
}
