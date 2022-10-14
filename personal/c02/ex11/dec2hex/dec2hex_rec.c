#include <stdio.h>
#include <string.h>

char	*dec2hexdec(int n)
{
	static	char	hex[100];
	static	int	r, i = 0;
	
	if (n != 0)
	{
		r = n % 16;
		// int to char
		if (r < 10)
			hex[i++] = r + 48; // 48 asci = 0
		else
			hex[i++] = r + 55; // 55 ascii = 7
		dec2hexdec(n / 16);
	}
	return hex;
}

int	main(int argc, char **argv)
{
	int	n;
	printf("Enter decimal value");
	scanf("%d", &n);
	/* n = (int)(*argv[1]); */
	char	*hexa;
	hexa = dec2hexdec(n);
	printf("Hexadecimal value of decimal number is %s", hexa);
}
