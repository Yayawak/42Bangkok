/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:59:59 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 17:00:54 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 1)
		return (!power);
	i = 0;
	result = nb;
	while (i < (power - 1))
	{
		result *= nb;
		i++;
	}
	return (result);
}
