/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:04:36 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/21 14:05:38 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool	is_char_in_string(char c, char *set)
{
	while (true)
	{
		if (*set == '\0')
			return (c == '\0');
		if (*set == c)
			return (true);
		set++;
	}
	return (false);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

int	count_occur(char *str, char *charset)
{
	int		count;
	char	*prev;
	char	*next;

	count = 0;
	prev = str;
	next = str;
	while (true)
	{
		if (is_char_in_string(*str, charset))
			next = str;
		if (next - prev > 1)
			count++;
		if (*str == '\0')
			break ;
		prev = next;
		str++;
	}
	return (count);
}

int	add_part(char **strs_arr, char *prev, int size, char *charset)
{
	if (is_char_in_string(prev[0], charset))
	{
		prev++;
		size--;
	}
	*strs_arr = (char *)malloc((size + 3) * sizeof(char));
	ft_strncpy(*strs_arr, prev, size);
	(*strs_arr)[size] = '\0';
	(*strs_arr)[size + 1] = '\0';
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	int		index;
	char	*prev_str;
	char	*next_str;
	char	**strs_arr;

	strs_arr = (char **)malloc(sizeof(char *) * count_occur(str, charset) + 1);
	index = 0;
	prev_str = str;
	next_str = str;
	while (true)
	{
		if (is_char_in_string(*str, charset))
			next_str = str;
		size = next_str - prev_str;
		if (size > 1)
			index += add_part(&strs_arr[index], prev_str, size, charset);
		if (*str == '\0')
			break ;
		prev_str = next_str;
		str++;
	}
	strs_arr[index] = 0;
	return (strs_arr);
}
