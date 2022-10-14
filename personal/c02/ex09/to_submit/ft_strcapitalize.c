int	is_printable_char(char c)
{
	if ((c < '0') 
			|| (c > '9' && c <= 'Z')
			|| (c > 'Z' && c < 'a')
			|| (c > 'z')
			) 
	{
		return (0);
	}
	return (1);
}

int	is_upper(char c)
{
	return ((c >= 'A') && (c <= 'Z')) ? (1) : (0);
}

int	is_lowercase(char c)
{
	return ((c >= 'a') && (c <= 'z')) ? (1) : (0);
}
void	to_uppercase(char c, char *p)
{
	c -= 'a' - 'A';
	*p = c;
}
void	to_lowercase(char c, char *p)
{
	c += 'a' - 'A';
	*p = c;
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
			to_uppercase(str[i], &str[i]);
			partial_i++;
		}
		else if (partial_i > 0 && is_upper(str[i]))
			to_lowercase(str[i], &str[i]);
		else if (is_printable_char(str[i]) == 0)
		{
			partial_i = 0;
		}
		else
			partial_i++;
		i++;
	}

	return str;
}
