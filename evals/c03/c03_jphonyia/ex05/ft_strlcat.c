/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:25:42 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 19:46:36 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	char			*s;

	s = dest;
	d = len(dest);
	if (size == 0 && d > size)
		return (0);
	i = 0;
	while (*s)
		s++;
	while (i < size - d - 1)
	{
		*s++ = src[i++];
	}
	*s = '\0';
	return (d + len(src));
}
