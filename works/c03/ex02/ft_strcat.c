/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:13:46 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/20 14:16:56 by athawebo         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_start;

	i = 0;
	d_start = f_strlen(dest);
	while (src[i] != '\0')
	{
		dest[d_start] = src[i];
		d_start++;
		i++;
	}
	dest[d_start] = '\0';
	return (dest);
}
