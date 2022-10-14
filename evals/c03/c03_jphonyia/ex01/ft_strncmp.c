/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:40:52 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/14 19:37:29 by athawebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				cmp;
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		cmp = s1[i] - s2[i];
		if (cmp > 0)
			return (cmp);
		if (cmp < 0)
			return (cmp);
		i++;
	}
	return (0);
}
