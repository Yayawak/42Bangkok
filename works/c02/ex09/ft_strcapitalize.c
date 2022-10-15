/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athawebo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:33:15 by athawebo          #+#    #+#             */
/*   Updated: 2022/10/15 17:41:36 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable_char(char c)
{
	if ((c < '0') || ((c > '9') && (c <= 'Z')))
		return (0);
	else if (((c > 'Z') && (c < 'a')) || (c > 'z'))
		return (0);
	return (1);
}

int	is_upper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

int	is_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	partial_i;

	i = 0;
	partial_i = 0;
	while (str[i] != '\0')
	{
		if (partial_i == 0 && is_lowercase(str[i]))
		{
			str[i] -= 'a' - 'A';
			partial_i++;
		}
		else if (partial_i > 0 && is_upper(str[i]))
			str[i] -= 'a' - 'A';
		else if (is_printable_char(str[i]) == 0)
			partial_i = 0;
		else
			partial_i++;
		i++;
	}
	return (str);
}
