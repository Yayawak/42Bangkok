/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:03:42 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 18:51:28 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	if (src[0] != '\0')
	{
		while (*(dest + i) != '\0')
			i++;
		x = 0;
		while (*(src + x) != '\0')
		{
			*(dest + i) = src[x];
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
	char dest[11];
	char src[] = " Bangkkok";

	dest[0] = '4';
	dest[1] = '2';
	dest[2] = '\0';
	printf("resultme : %s\n", ft_strcat(dest, src));
	printf("resultsys : %s\n", strcat(dest, src));
}
