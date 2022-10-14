/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:33:31 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 19:06:45 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 32 && *(str + i) <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char str1[] = "@gmail.com";
	char str2[] = "mywork~";
	char str3[] = ".DS_Store";
	char str4[] = "skdh192.,'";
	char str5[] = "";
	char str6[] = "\n";

	printf("%d : %s\n",ft_str_is_printable(str1),str1);
	printf("%d : %s\n",ft_str_is_printable(str2),str2);
	printf("%d : %s\n",ft_str_is_printable(str3),str3);
	printf("%d : %s\n",ft_str_is_printable(str4),str4);
	printf("%d : %s\n",ft_str_is_printable(str5),str5);
	printf("%d : %s\n",ft_str_is_printable(str6),str6);
}
*/
