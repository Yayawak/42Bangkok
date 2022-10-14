/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:47:02 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 19:05:48 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (*(str + i) >= 48 && *(str + i) <= 57)
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
	char str1[] = "1234523";
	char str2[] = "123asd";
	char str3[] = "1231 23";
	char str4[] = "1234213";
	char str5[] = "1234-.3";
	char str6[] = "";

	printf("%d : %s\n",ft_str_is_numeric(str1), str1);
	printf("%d : %s\n",ft_str_is_numeric(str2), str2);
	printf("%d : %s\n",ft_str_is_numeric(str3), str3);
	printf("%d : %s\n",ft_str_is_numeric(str4), str4);
	printf("%d : %s\n",ft_str_is_numeric(str5), str5);
	printf("%d : %s\n",ft_str_is_numeric(str6), str6);
}
*/
