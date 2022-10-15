/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:55:49 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/15 17:57:17 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putc(char c)
{
	write(1, &c, 1);
}

int	is_printable_char(char c)
{
	if ((c < 32) || (c == 127))
	{
		return (0);
	}
	else
		return (1);
}

void	ft_put_hexa(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if ((c <= 0) && (err == 0))
		c += 256;
	if (c >= 16)
	{
		ft_put_hexa(c / 16, 1);
		ft_put_hexa(c % 16, 1);
	}
	else if ((c > 0) && (c < 16))
	{
		if (err == 0)
			ft_putc('0');
		ft_putc(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (is_printable_char(str[i]) == 0)
		{
			ft_putc('\\');
			ft_put_hexa((int)(str[i]), 0);
		}
		else
		{
			ft_putc(str[i]);
		}
		i++;
	}
}
