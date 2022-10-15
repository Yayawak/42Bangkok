/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:43:48 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/15 17:53:38 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int dstsize)
{
	unsigned int	count;
	unsigned int	idx;

	count = 0;
	idx = 0;
	while (src[count] != '\0')
		count++;
	if (dstsize != 0)
	{
		while (src[idx] != '\0' && idx < (dstsize - 1))
		{
			dest[idx] = src[idx];
			idx++;
		}
		dest[idx] = '\0';
	}
	return (count);
}
