/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:52:17 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 19:07:32 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			i++;
		}
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) -= 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "./,sad@}],;";

	printf("Before : %s\n", str);
	ft_strupcase(str);
	printf("After : %s\n", str);
	return (0);
}
