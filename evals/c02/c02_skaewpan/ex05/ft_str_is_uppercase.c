/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:49:49 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/12 10:50:27 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*(str + i) != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char str1[] = "HGSDGAD";
	char str2[] = "dsaldas;";
	char str3[] = "asdasdd";
	char str4[] = "2123dsdsa";
	char str5[] = "HdasdADADA";
	char str6[] = "";

	printf("%d : %s\n",ft_str_is_uppercase(str1),str1);
	printf("%d : %s\n",ft_str_is_uppercase(str2),str2);
	printf("%d : %s\n",ft_str_is_uppercase(str3),str3);
	printf("%d : %s\n",ft_str_is_uppercase(str4),str4);
	printf("%d : %s\n",ft_str_is_uppercase(str5),str5);
	printf("%d : %s\n",ft_str_is_uppercase(str6),str6);
}
*/
