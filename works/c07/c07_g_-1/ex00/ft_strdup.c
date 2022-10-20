/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:06:52 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 19:10:10 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *p_str)
{
	int	len;

	len = 0;
	while (p_str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*p_dest;

	index = 0;
	p_dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (p_dest == NULL)
		return (0);
	while (src[index])
	{
		p_dest[index] = src[index];
		index++;
	}
	p_dest[index] = '\0';
	return (p_dest);
}
