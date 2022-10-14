/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:20:17 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 15:49:08 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	//if fount check others by comparing sum of ascii in range
	//if there are the same, return first location
	//else continue loop
*/

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	sum(char *str, int first, int last)
{
	int	total;

	total = 0;
	while (first < last)
	{
		total += str[first];
		first++;
	}
	return (total);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		len_find;
	char	*adr;

	i = 0;
	len_find = len(to_find);
	while (str[i])
	{
		if (str[i] == *to_find)
		{
			adr = &str[i];
			if (sum(str, i, i + len_find) == sum(to_find, 0, len_find))
			{
				return (adr);
			}
		}
		i++;
	}
	return ("\0");
}
