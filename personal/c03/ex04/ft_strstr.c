int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i, j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		// shift index 
		// PARALLEL RESPONSIVE INDEX CHECKING
		// Like ;
		// str_a : 'Levi Ackerman'
		// str_b : 'Acker'
		// 				 56789 : 5 = 5 + 0, 6 = 5 + 1, 7 = 5 + 2
		// i =      0123456789
		// j =           01234
		// look  : '     Acker'
		while ((str[i + j] == to_find[j]) && (str[i + j] != '\0'))
		{
				if (to_find[j + 1] == '\0')
						return (&str[i]);
				j++;

		}
		i++;
	}
	return (str);
}
