/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:38:21 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/14 16:11:04 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
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
	printf("%d",ft_str_is_alpha("adfaf123"));
	printf("%d",ft_str_is_alpha("adfasfd"));
	printf("%d",ft_str_is_alpha(""));
	return(0);
}
