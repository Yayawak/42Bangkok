#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int		main(int argc, char	**argv)
{
	//char	*s1 = "HelloW";
	//char	*s2 = "HelloWorld";

	//int	k = ft_strncmp(s1, s2, 7);
	int	k = ft_strncmp(argv[1], argv[2], (int)argv[3]);
	printf("k = %d", k);
	return (0);
}
