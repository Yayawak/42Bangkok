/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:59:42 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 19:05:38 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			i++;
		}
		else if (*(str + i) >= 'a' && *(str + i) <= 'z')
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
	char str1[] = "Sup=awit";
	char str2[] = "Sup/awit";
	char str3[] = "Suphawit";
	char str4[] = "Sup.awit";
	char str5[] = "Sup awit";
	char str6[] = "Su_wit";

	printf("%d : %s\n",ft_str_is_alpha(str1) ,str1);
	printf("%d : %s\n",ft_str_is_alpha(str2) ,str2);
	printf("%d : %s\n",ft_str_is_alpha(str3) ,str3);
	printf("%d : %s\n",ft_str_is_alpha(str4) ,str4);
	printf("%d : %s\n",ft_str_is_alpha(str5) ,str5);
	printf("%d : %s\n",ft_str_is_alpha(str6) ,str6);
}
*/
