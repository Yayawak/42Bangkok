/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:57:56 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 15:11:14 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

bool	is_in_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (true);
		str++;
	}
	return (false);
}

int	ft_isspace(char c)
{
	return (is_in_string(c, "\t\n\v\f\r "));
}

bool	is_operator(char c)
{
	return (is_in_string(c, "+-"));
}

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	while (is_operator(*str))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_is_digit(*str))
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	return (sign * nb);
}
