/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:49:27 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/13 15:41:28 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			*(str + i) += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	x = 1;
	i = 0;
	ft_lowcase(str);
	while (str[i] != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (x == 1)
			{
				*(str + i) -= 32;
				x = 0;
			}
		}
		else if (*(str + i) >= '0' && *(str + i) <= '9')
			x = 0;
		else
			x = 1;
		i++;
	}
	return (str);
}

/*
int	main()
{
	char str1[] = "he said, something";
	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str5[] = "ASDASDSA ASD AS ASDASasaisdas ASDA !@ ! @#R)Q#)SAS)FJ@ OJ QW";

	printf("Before : %s\n",str1);
	printf("Before : %s\n",str2);
	printf("Before : %s\n",str5);
	printf("After : %s\n",ft_strcapitalize(str1));
	printf("After : %s\n",ft_strcapitalize(str2));
	printf("After : %s\n",ft_strcapitalize(str5));
	return (0);
}
*/
