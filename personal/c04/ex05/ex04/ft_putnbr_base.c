#include <unistd.h>
#include <stdio.h>

void ft_putc(char c) {
	write(1, &c, 1); 
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}


int	ft_validate_base(char *base, int base_len)
{
	int	i;
	int	k;

	i = 0;
	if (base_len <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if ((base[i] < ' ') || (base[i] > '~') 
				|| 
				(base[i] == '+') || (base[i] == '-')
		   )
			return (0);
		k = i + 1;
		while (k < base_len)
		{
			if (base[i] == base[k])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

void	ft_putbase(long nbr, char *base, int base_len)
{
	long	max;

	max = 2147483648;
	if (nbr == (-1) * max)
	{
		ft_putc('-');
		ft_putbase(max, base, base_len);
	}
	else if (nbr < 0)
	{
		ft_putc('-');
		ft_putbase((-1) * nbr, base, base_len);
	}
	else if (nbr > base_len)
	{
		ft_putbase(nbr / base_len, base, base_len);
		ft_putc(base[nbr % base_len]);
	}
	else
	{
		ft_putc(base[nbr % base_len]);
	}
}

void ft_putnbr_base(int nbr, char *base) 
{
	int	base_len;
	int	is_valid;

	if (base == 0)
		return ;
	base_len = ft_strlen(base);
	is_valid = ft_validate_base(base, base_len);
	printf("%s\nIs valid ? %d\n", base, is_valid);

	if (is_valid)
		ft_putbase(nbr, base, base_len);
}

