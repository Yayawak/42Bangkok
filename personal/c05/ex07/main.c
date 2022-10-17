#include <stdio.h>
#include <string.h>
#include "ft_find_next_prime.c"

void	visualize_next_prime(int guess_prime, int start, int end)
{
	/* int start; */
	/* int	end; */
	int	next_prime;

	/* start = 0; */
	/* end = 30; */
	next_prime = ft_find_next_prime(guess_prime);
	printf("\n");
	while (start < end)
	{
		if (start == 0)
			printf("%d.", start);
		/* if (start == guess_prime) */
		else if (start == guess_prime)
		{
			printf("%dx", guess_prime);
		}
		else if (start == next_prime)
		{
			printf("%d*", next_prime);
		}
		else if (start == end - 1)
		{
			printf("%d.", end);
		}
		else 
		{
			printf("_.");
		}
		start++;
	}
	printf("\n\n\n");

}

int		main(int argc, char **argv)
{
	int	start;

	/* k = -8; */
	start = 20;
	int end = 50;
	/* i = 0; */
	while (start < end)
	{
		visualize_next_prime(start, 0, end);
		/* printf("number to check = %d \t", k); */
		/* printf("next prime of '%d' = '%d' \t\n", k, ft_find_next_prime(k)); */
		/* printf("-------------------------------------------------------\n"); */
		start++;
	}


	/* int	k; */

	/* k = (int)argv[1]; */
	/* k = 25; */

	/* printf("number to check = %d \t", k); */
	/* printf("next prime of '%d' = '%d' \t\n", k, ft_find_next_prime(k)); */

	return (0);
}
