/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:54:23 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 16:57:15 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	if (nb < 1)
		return (!nb);
	n = 1;
	while (nb)
		n *= nb--;
	return (n);
}

int	_ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
	i++;
	}
	return (result);
}
