/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 23:25:46 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/14 16:15:47 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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

int main(void){
	printf("%d" , ft_str_is_printable("sadfasd"));
	printf("%d" , ft_str_is_printable("\n"));
	
}
