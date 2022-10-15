#include <stdio.h>
#include "ft_strncpy.c"
#include <string.h>

int	main(void)
{
	char src[40];
	char dest[12];

	// Fill command : filled with '\0'
	memset(dest, '\0', sizeof(dest));

	strcpy(src, "This is tutorialspoint.com");
	/* strncpy(dest, src, 10); */
	
	ft_strncpy(dest, src, 5);
	printf("The final copied string : %s\n", dest);


	return (0);
}
