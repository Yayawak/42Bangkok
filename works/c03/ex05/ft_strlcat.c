/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:35:01 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 14:36:29 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				d_len;
	unsigned int	s_start;

	d_len = ft_strlen(dest);
	if (size <= d_len)
		return (size + d_len);
	s_start = 0;
	while ((src[s_start] != '\0') && (s_start + 1 < size))
	{
		dest[d_len + s_start] = src[s_start];
		s_start++;
	}
	dest[d_len + s_start] = '\0';
	return (d_len + s_start);
}
