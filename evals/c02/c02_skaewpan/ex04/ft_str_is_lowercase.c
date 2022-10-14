/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:21:39 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 19:05:59 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*
int	main(void)
{
	char str1[]="HdfaHskd";
	char str2[]="ladssdld";
	char str3[]="sadsalda";
	char str4[]="qw;e weq";
	char str5[]="JADAKSDJ";
	char str6[]="";

	printf("%d : %s\n",ft_str_is_lowercase(str1), str1);
	printf("%d : %s\n",ft_str_is_lowercase(str2), str2);
	printf("%d : %s\n",ft_str_is_lowercase(str3), str3);
	printf("%d : %s\n",ft_str_is_lowercase(str4), str4);
	printf("%d : %s\n",ft_str_is_lowercase(str5), str5);
	printf("%d : %s\n",ft_str_is_lowercase(str6), str6);
}
*/
