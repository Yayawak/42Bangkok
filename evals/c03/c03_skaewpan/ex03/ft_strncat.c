/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:14:16 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 18:46:27 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	x;

	i = 0;
	if (src[0] != '\0')
	{
		while (*(dest + i) != '\0')
			i++;
		x = 0;
		while (x < nb)
		{
			dest[i] = src[x];
			i++;
			x++;
		}
		dest[i] = '\0';
		return (dest);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	char str1[] = "42";
	char str2[] = "Bangkok";

	printf("resultme : %s\n", ft_strncat(str1, str2, 3));
	printf("resultme : %s\n", strncat(str1, str2, 3));
}
