/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpuasir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 03:30:00 by chpuasir          #+#    #+#             */
/*   Updated: 2022/10/13 12:55:10 by chpuasir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ti;

	i = 0;
	ti = 1;
	ft_lower(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ti == 1)
				str[i] -= 32;
			ti = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			ti = 0;
		else
			ti = 1;
		i++;
	}
	return (str);
}
/*
int main(void){
	char str[] = "CHan LaLin 34wrOO";
	printf("%s",ft_strcapitalize(str));
}*/
