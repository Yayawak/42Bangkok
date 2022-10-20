/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:03:39 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/20 18:30:06 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (*dest);
}
#include <unistd.h>
#include <stdio.h>
int main()
{
	char s1[100] = "asdfgh123456 ";
	char s2[] = "asdfgh456";
	int k = ft_strlcat(s1, s2, 15);
	printf("L = %d\n", k);
	
	printf("%s", s1);
}
