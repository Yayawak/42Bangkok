#include <stdio.h>

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

/*
char	*ft_strcapitalize(char *str)
{
	int	partial_i = 0;

	while (*str != '\0')
	{

		// Control appearance of each partial word.
		if (partial_i == 0 && is_lowercase(*str))
		{
			to_uppercase(*str, str);
			partial_i++;
		}
		else if (partial_i > 0 && is_upper(*str))
		{
			to_lowercase(*str, str);
		}
		else if (is_printable_char(*str) == 0)
		{
			partial_i = 0;
		       	printf("\n");
		}
		else
			// reset partial_i because found new word.
			partial_i++;
		printf("Char str[i] = %c\t", *str);
		printf("partial_i is : %d\n", partial_i);
		str++;
	}

	return str;
}
*/

char	*ft_strcapitalize(char *str)
{
	int	i; // major i
	int	partial_i;

	i = 0;
	partial_i = 0;

	while (str[i] != '\0')
	{

		// Control appearance of each partial word.
		// 1 : ! FIRST LETTER OF WORD (PIVOT)
		if (partial_i == 0 && is_lowercase(str[i]))
		{
			to_uppercase(str[i], &str[i]);
			partial_i++;
		}
		// 2 : CONSUQUENCE LETTERS AFTER PIVOT
		else if (partial_i > 0 && is_upper(str[i]))
		{
			to_lowercase(str[i], &str[i]);
		}
		// 3 : FOUND NON-PRINTABLE CHARACTERS
		else if (is_printable_char(str[i]) == 0)
		{
			// reset partial_i because found new word.
			partial_i = 0;
		       	printf("\n");
		}
		// 4 : 
		else
			partial_i++;
		printf("Char str[%d] = %c\t", i, str[i]);
		printf("partial_i is : %d\n", partial_i);
		i++;
	}

	return str;
}
