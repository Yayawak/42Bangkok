#include <unistd.h>

// print same character s times (size times).
void	ft_putc(char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &c , 1);
		i++;
	}
}

// already sended nb as hex-code ?
// dec2hex ?
void	ft_get_hex(unsigned long long nb, int prev)
{
	char	*base;

	base = "0123456789abcdef";
	// prefix by 0 if it's actually hex code
	if (nb < 16 && prev == 1)
		ft_putc('0', 1);
	// recurse back to 0 -> 16 ( 0 -> f )
	if (nb >= 16)
	{
		ft_get_hex(nb / 16, 0);
		ft_get_hex(nb % 16, 0);
	}
	else
	{
		ft_putc(base[nb], 1);
	}
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned	long	long	tmp;
	int	i;

	tmp = addr;
	i = 1;
	while (i++ < 15)
	{
		if (tmp < 16)
			ft_putc('0', 1);
		tmp /= 16;
	}
	ft_get_hex(addr, 0);
}

// *c in this function is sub-string on each line
void	ft_print_data(unsigned char *c, int size)
{
	int	i;

	i = -1;
	// SECTION B : HEX-CODE
	while (i++ < 16)
	{
		// 1 space on every 2 characters 
		if (i % 2 == 0)
			ft_putc(' ', 1);
		if (i < size)
			ft_get_hex((unsigned long long)*(c + i), 1);
		else if (i != 16)
			ft_putc(' ', 2);
	}
	// SECTION C : SUB-STRING ON EACH LINES
	i = -1;
	while (i++ < size - 1)
	{
		// non-printable character
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putc('.', 1);
		else
			ft_putc(*(c + i), 1);
	}
}

// send *addr = str[], size = 150
void	*ft_print_memory(void	*addr, unsigned int size)
{
	unsigned	int	i, sendsize;
	unsigned	char	*c;
	
	i = 0;
	c = addr; // some hex addr 
//00000010a161f40
//0x7fff57f54a40

	// suppose your string size is 200;
	// you will partitiate your string into 16 characters for each line.
	// so 16 * 12 = 192 | 200 % 16 = 8 | 200 div 16 = 12
	/* while ( i * 16 < size ) */
	while ( i < size / 16 )
	{
		// i < 150 /16 -> i < 9;
		if (i < (size / 16))
			// quotient
			sendsize = 16;
		else
			// rem
			sendsize = size % 16;

		// SECTION A, B : ADDRESS FOR EACH SUP-STRING 
		// !!!!!!!!!!!! *c is string don't forget
		// c + (i * 16) is how we substring ???
		ft_print_addr((unsigned long long)c + (i * 16));
		ft_putc(':', 1);

		// SECTION B : HEX-CODE FOR EACH CHARACTERS 
		// mostly value of sendsize is 16, except for the last is rem
		ft_print_data(c + (i * 16), sendsize);
		ft_putc('\n', 1);
		i++;
	}
	return (addr);
}
