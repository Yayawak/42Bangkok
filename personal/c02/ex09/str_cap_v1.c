#include <stdio.h>

int	is_alphabet(char *c)
{
	if (*c < '0' 
		|| (*c > '9' && *c < 'A') 
		|| (*c > 'Z' && *c < 'a') 
		|| (*c > 'z'))
	{
		return (0);			
	}
	return (1);			
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

int	is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z') ? (1) : (0);
}

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z') ? (1) : (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i, c;

	i = 0;
	c = 0;
	while (str[c] != '\0')
	{
		/* printf("string now %s\n", str); */
		if (i == 0 && is_lowercase(str[c]) == 1)
		{
			printf("Here is lower pass.\n");
			/* *str -= 'a' - 'A'; */
			to_uppercase(str[c], &str[c]);
			i++;
		}
		else if (i > 0 && is_uppercase(str[c]) == 1)
		{
			printf("Here is upper pass.\n");
			to_lowercase(str[c], &str[c]);
		}
		else if (is_alphabet(str) == 0)
			i = 0;
		else
			i++;

		c++;
	}
	return (str);
}
