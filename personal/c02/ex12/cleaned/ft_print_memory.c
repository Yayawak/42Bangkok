/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:00:49 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/15 18:08:24 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putc(char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_get_hex(unsigned long long nb, int prev)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16 && prev == 1)
		ft_putc('0', 1);
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
	unsigned long long	tmp;
	int					i;

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

void	ft_print_data(unsigned char *c, int size)
{
	int	i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			ft_putc(' ', 1);
		if (i < size)
			ft_get_hex((unsigned long long)*(c + i), 1);
		else if (i != 16)
			ft_putc(' ', 2);
	}
	i = -1;
	while (i++ < (size - 1))
	{
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putc('.', 1);
		else
			ft_putc(*(c + i), 1);
	}
}

void	*ft_print_memory(void	*addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	sendsize;
	unsigned char	*c;

	i = 0;
	c = addr;
	while ((i < size) / 16)
	{
		if (i < (size / 16))
			sendsize = 16;
		else
			sendsize = size % 16;
		ft_print_addr((unsigned long long)c + (i * 16));
		ft_putc(':', 1);
		ft_print_data(c + (i * 16), sendsize);
		ft_putc('\n', 1);
		i++;
	}
	return (addr);
}
