#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strdup.c"

int	main(void)
{
		char	*str;
		char	*allocated;

		str = "Hello World with malloc()";
		printf("x : base : $%s$ @ %p\n\n", str, str);

		allocated = strdup(str);
		printf("c : alloc : $%s$ @ %p\n\n", allocated, allocated);

		allocated = ft_strdup(str);
		printf("ft : alloc : $%s$ @ %p\n\n", allocated, allocated);

		/* char	source[] = "GeeksForGeeks"; */

		/* char	*target = strdup(source); */
		/* printf("Pointer of %s is %p\n", target, target); */
		/* printf("%s\n", target); */
		/* printf("Strin dup of %s is %s", source, ft_strdup(source)); */

		
		return (0);
}
