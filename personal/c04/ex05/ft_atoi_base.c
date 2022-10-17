#include <unistd.h>
#include <stdio.h>

void ft_putc(char c) {
	write(1, &c, 1); 
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_neg_space(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
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

int	get_base_number_form(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
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

int	ft_atoi_base(char *str, char *base) 
{
	int	base_len;
	int	is_valid;
	int	sign;
	int	num;
	int i;

	if (base == 0 || str == 0)
		return (0);
	base_len = ft_strlen(base);
	is_valid = ft_validate_base(base, base_len);
	num = 0;
	i = 0;

	/* printf("%s\nIs valid ? %d\n", base, is_valid); */

	if (!is_valid)
		return (0);
	sign = ft_neg_space(str, &i);
	/* ft_putbase(num, base, base_len); */
	/* get_base_number_form */
	while (get_base_number_form(str[i], base) != -1)
	{
		num = num * base_len + get_base_number_form(str[i], base);
		i++;
	}
	return (num * sign);
}

