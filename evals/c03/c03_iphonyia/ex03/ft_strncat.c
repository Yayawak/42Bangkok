/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:06:09 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 15:46:15 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*s;
	unsigned int	i;

	s = dest;
	while (*dest)
		dest++;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		*dest++ = src[i];
		i++;
	}
	*dest++ = '\0';
	return (s);
}
