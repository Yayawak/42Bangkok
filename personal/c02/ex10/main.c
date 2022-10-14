#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_strlcpy.c"

void	test(int size)
{
	char	string[] = "Hello threre, Venus";
	char	buffer[19];
	int	r;

	/* int	n = strlcpy(str_a, str_b, 5); */
	r = strlcpy(buffer, string, size);
	printf("Copied '%s'\n into \n'%s'\n, length %d, size %d\n\n",
			string ,buffer, r, size);
}

void	test_diff(unsigned int n)
{
	char	src[] = "Dragon Stone";
	/* // ERROR USING POINTER HERE ! */
	/* /1* char	*src = "DragonStone"; *1/ */
	/* /1* char	src[] = "Source"; *1/ */
	/* char	dest[] = ""; */

	/* char src[] = "Source"; */
	char dest[] = "";

	/* n = 4; */

	printf("\nBEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);

    n = ft_strlcpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);
	/* printf("\nBefore\nSrc: %s\nDest: %s\ */
	/* 		\nDstsize: %d\n", */
	/* 		src, dest, n); */

	/* /1* dstsize = ft_strlcpy(dest, src, dstsize); *1/ */
	/* n = strlcpy(dest, src, n); */

	/* printf("\nAfter\nSrc: %s\nDest: %s\ */
	/* 		\nDstsize: %d\n", */
	/* 		src, dest, n); */
	/* printf("---------------------------------"); */
}

int	main(int argc, char *argv[])
{
	/* for (unsigned int i = 1; i < 10; i++) */ 
	/* for (int i = 0; i < (int)(argv[1]); i++) */
	/* for (int i = 0; i < atoi(argv[1]); i++) */
	/* { */
	/* 	test_diff(i); */
	/* 	printf("===================================="); */
	/* } */


	/* unsigned int n; */
	/* n = 4; */
	char src[] = "House of the dragons";
	char dest[] = "";

	unsigned int n = atoi(argv[1]);

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, n);

	/* n = ft_strlcpy(dest, src, n); */
	n = ft_strlcpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, n);

	/* test_diff(4); */

	/* unsigned	int n = 5; */
	/* test_diff(n); */
	/* char	*str_b = "Stone"; */

	/* printf("n = %d\n", n); */
	/* test(19); */
	/* test(10); */
	/* test(8); */
	/* test(5); */
	/* test(1); */
	/* test(0); */


	return (0);
}
