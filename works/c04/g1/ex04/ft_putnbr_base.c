/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:13:04 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/21 15:19:04 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar_rec(int nbr, int base, char *base_str, int carry);
void	ft_putnbr_base(int nbr, char *base);
int	ft_strlen(char *str);
int	ft_is_base_valid(char *str);

int	ft_strlen(char *str)
{
		int	i;

		if (!str)
				return (0);
		i = 0;
		while (*str != 0)
		{
				str ++;
				i ++;
		}
		return (i);
}

int	ft_is_base_valid(char *str)
{
		char	is_seen[256];
		int	is_seen_index;
		int	index;

		is_seen[0] = '\0';
		index = 0;
		while (*str != 0)
		{
				if (*str == '-' || *str == '+')
						return (0);
				is_seen_index = 0;
				while (is_seen[is_seen_index] != 0)
				{
						if (is_seen[is_seen_index] == *str)
								return (0);
						is_seen_index ++;
				}
				is_seen[index] = *str;
				is_seen[++index] = '\0';
				str ++;
		}
		return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
		char	c;
		int	base_len;
		int	carry;

		base_len = ft_strlen(base);
		if (base_len <= 1 || !ft_is_base_valid(base))
		{
				return ;
		}
		carry = 0;
		if (nbr == 0)
		{
				c = base[0];
				write(1, &c, 1);
		}
		if (nbr < 0)
		{
				carry = 1;
				nbr ++;
				nbr *= -1;
				c = '-';
				write(1, &c, 1);
		}
		ft_putchar_rec(nbr, base_len, base, carry);
}

void	ft_putchar_rec(int nbr, int base, char *base_str, int carry)
{
		char		c;
		unsigned int	number;

		number = nbr;
		if (nbr > 0)
		{
				c = base_str[(number + carry) % base];
				ft_putchar_rec((number + carry) / base, base, base_str, 0);
				write(1, &c, 1);
		}
}

