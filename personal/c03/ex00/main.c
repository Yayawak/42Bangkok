#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int		main()
{
	char	*s1 = "hello"; // end of word  = nul -> 0
	char	*s2 = "helloWorld"; // eof(s1) but s2 = W -> 87

	printf("Diff : %d", ft_strcmp(s1, s2));
	return (0);
}
