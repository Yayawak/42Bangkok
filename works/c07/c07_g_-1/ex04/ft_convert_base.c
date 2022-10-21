/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:27:41 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/21 14:00:41 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define NO_MATCH -1

int		ft_str_length(char *str);
int		compute_number_length(unsigned int number, int radix, bool negative);
bool	is_space(char c);
bool	is_base_valid(char *str);

int	get_base_num_name(char *base, char match)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == match)
			return (index);
		index++;
	}
	return (NO_MATCH);
}

char	*ft_buffer_base(char *base, unsigned int number, bool negative)
{
	int		index;
	int		radix;
	int		length;
	char	*string;

	radix = ft_str_length(base);
	length = compute_number_length(number, radix, negative);
	string = (char *)malloc((length + 1) * sizeof(char));
	if (!string)
		return (0);
	if (negative)
	{
		string[0] = '-';
		index = 1;
	}
	else
		index = 0;
	while (index < length)
	{
		string[length - (!negative) - index++] = base[number % radix];
		number /= radix;
	}
	string[length] = '\0';
	return (string);
}

bool	is_neg(int sign)
{
	if (sign < 0)
		return (true);
	return (false);
}

int	get_result_itered(char *base_from, int radix,
				char *nbr, unsigned int result)
{
	int	base_num_name;

	while (true)
	{
		base_num_name = get_base_num_name(base_from, *nbr);
		if (base_num_name == NO_MATCH)
			break ;
		result *= radix;
		result += base_num_name;
		nbr++;
	}
	return (result);
}

char	*ft_convert_base(char	*nbr, char *base_from, char *base_to)
{
	int				radix;
	int				sign;
	unsigned int	result;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
		return (NULL);
	radix = ft_str_length(base_from);
	result = 0;
	sign = 1;
	while (is_space(*nbr))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
		if (*(nbr++) == '-')
			sign *= -1;
	result = get_result_itered(base_from, radix, nbr, result);
	if (result == 0)
			sign = 1;
	return (ft_buffer_base(base_to, result, is_neg(sign)));
}
