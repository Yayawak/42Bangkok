/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:56:25 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/14 16:14:34 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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

int main(void)
{
	printf("%d",ft_str_is_uppercase("ASFSDFS"));
	printf("%d",ft_str_is_uppercase("AS123csa"));
	return(0);
}
