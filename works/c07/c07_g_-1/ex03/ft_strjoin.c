/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:21:51 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/21 13:24:43 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_str_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}
char	*ft_strjoin_error(void)
{
		char	*ret;

		ret = malloc(1);
		*ret = '\0';
		return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		full_length;
	char	*read_head;
	char	*string;

	if (size <= 0)
			return (ft_strjoin_error());
	full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
	string = (char *)malloc((full_length + 1) * sizeof(char));
	if (!(string))
		return (0);
	read_head = string;
	index = -1;
	while (++index < size)
	{
		ft_strcpy(read_head, strs[index]);
		read_head += ft_str_length(strs[index]);
		if (index < (size - 1))
		{
			ft_strcpy(read_head, sep);
			read_head += ft_str_length(sep);
		}
	}
	*read_head = '\0';
	return (string);
}
