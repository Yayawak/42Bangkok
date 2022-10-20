/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:17:51 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 14:22:29 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	f_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d_len;

	i = 0;
	d_len = f_strlen(dest);
	while ((src[i] != '\0') && (i < nb))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (dest);
}
