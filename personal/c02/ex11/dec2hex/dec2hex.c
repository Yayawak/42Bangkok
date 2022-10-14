#include <stdio.h>

void	dec2hex()
{
	long	dec, q, r;
	int	i, j = 0;
	char	hexdec[100];

	printf("Enter decimal number:");
	scanf("%ld", &dec);

	q = dec;

	while (q != 0)
	{
		r = q % 16;
		if (r < 10)
			hexdec[j++] = 48 + r;
		else
			hexdec[j++] = 55 + r;
		q /= 16;
	}

	for (i = j)
	return (0);
}

int	main(int argc, char **argv)
{
}
