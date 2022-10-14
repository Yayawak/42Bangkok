/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:58:10 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/14 15:08:27 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		while (src[x] != '\0' && x < (size - 1))
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (i);
}
