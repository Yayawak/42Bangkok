/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:23:53 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/14 16:12:56 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			i += 0;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_numeric("jfaskdjf;la"));
	printf("%d", ft_str_is_numeric("sdjf12342534"));
	printf("%d", ft_str_is_numeric("480237508273508"));
	return (0);
}
