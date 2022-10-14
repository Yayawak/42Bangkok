#include <stdio.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:06:28 by teecharo          #+#    #+#             */
/*   Updated: 2022/10/14 16:07:07 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


int	main(void)
{
	char	*src = "Hello world";
	char 	dest[100];

	printf("Before src :%s\n, dest %s \n\n", src, dest);
//	ft_strcpy(dest, src);
	ft_strncpy(dest, src, 8);
	printf("After src :%s\n, dest %s \n\n", src, dest);
	return (0);
}
