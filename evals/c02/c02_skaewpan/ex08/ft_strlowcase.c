/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:54:39 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/12 10:54:50 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			*(str + i) = *(str + i) + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

/*
int	main(void)
{
	char str[] = "/./,SUPHAWIT&*@#";

	printf("Before : %s\n", str);
	printf("After : %s\n", ft_strlowcase(str));
}
*/
