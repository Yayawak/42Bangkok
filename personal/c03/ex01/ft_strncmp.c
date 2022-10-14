int	f_strlen(char *s)
{
	int	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}

	return len;
}

int	ft_strncmp(char *s1, char *s2, unsigned int	n)
{
	int	i;
	
	i = 0;
	while ((i < n) && ((s2[i] != '\0') || (s2[i] != '\0')))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
