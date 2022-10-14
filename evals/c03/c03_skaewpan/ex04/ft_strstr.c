/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:38:41 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 18:56:31 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == 0)
		return (str);
	if (*str == 0)
		return (0);
	while (*str != *to_find)
		str++;
	to_find++;
	while (*str == *to_find || *str == *(str - 1))
	{
		*to_find = *str;
		to_find++;
		str++;
	}
	return (str);
}

int	main(void)
{
	char str1[] = "suphawit kaewpan";
	char str2[] = "i";

	printf("%s\n", ft_strstr(str1, str2));
	return (0);
}
