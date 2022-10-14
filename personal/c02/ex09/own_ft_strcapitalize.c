#include <stdio.h>

int	is_alphabet(char c)
{
	if ((c < 'A') || (c > 'z') || ((c > 'Z') && (c < 'a')))
		return (0);
	return (1);
}
void	to_uppercase(char c, char *p)
{
	c -= 'a' - 'A';
	*p = c;
}
void	to_lowercase(char c, char *p)
{
	// 'a' - 'A' == 97 - 65 == 32
	c += 'a' - 'A';
	*p = c;
}

int	ft_strlen(char *str)
{
	int	len;

	for (len = 0; *str != '\0'; str++)
		len++;
	return (len);
}

char	*ft_strcapitalize(char *str)
{
	int	partial_i = 0 - 1;
	for (int i = 0; i < ft_strlen(str); i++)
	{

		// continuity of word
		if (is_alphabet(str[i]) == 1)
		{
			partial_i++;
		}
		// end of word
		else
		{
			partial_i = 0;
			// before reset partial_i = 0 -> capitalize first letter
			/* to_uppercase(str[i - partial_i], */
			/* 	       	&str[i - partial_i]); */

			printf("Subword is : %c\n\n", str[i]);
		}
		printf("Char str[%d] = %c\t", i,  str[i]);
		printf("partial_i is : %d\n", partial_i);

	}

	return str;
}
