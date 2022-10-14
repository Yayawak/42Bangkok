#include <unistd.h>
#include <stdio.h>

void	ft_putc(char c)
{
	write(1, &c, 1);
}

int	is_printable_char(char c)
{
	return ((c < 32) || (c == 127)) ? 0 : 1;
}

// dec for \n = 10 
// dec for \t = 9
void	ft_put_hexa(int	c, int	err)
{
	printf("\tNumber sended to put_hexa_fn = %d\n", c);
	char	*base;

	base = "0123456789abcdef";
	if ((c <= 0) && (err == 0))
		c += 256;
	if (c >= 16)
	{
		ft_put_hexa(c / 16, 1);
		ft_put_hexa(c % 16, 1);
	}
	// \t, \n -> 9, 10 -> came to here
	// if c is in range (1, 16) == (1, f)
	else if ((c > 0) && (c < 16))
	{
		// Primary print
		if (err == 0)
			ft_putc('0');
		ft_putc(base[c]);
	}
	else
	{
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	/* Bon		  \njo	\nur */
	/* Bon\09\09  \0ajo\09\0aur% */
	while (str[i])	
	{
		// non-printable-character
		// \t\t\n\t\n
		// send as number (int)
		if (is_printable_char(str[i]) == 0)
		{
			// prefix by \
			// i.e. \09   \0a  
			ft_putc('\\');
			// str[i] purely is char
			/* j = str[i]; // this is int */
			/* ft_put_hexa(str[i], 0); */
			/* ft_put_hexa(j, 0); */
			/* ft_put_hexa(str[i] - '0', 0); */
			/* ft_put_hexa(str[i] + '0', 0); */

			// first : send \t -> 9
			ft_put_hexa((int)(str[i]), 0);

		}
		// printable char
		// Bon jour
		else
		{
			ft_putc(str[i]);
		}
		i++;
	}
}

