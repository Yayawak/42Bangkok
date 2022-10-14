#include <unistd.h>
#include <stdio.h>

void	ft_putc(char c)
{
	write(1, &c, 1);
}

void	ft_puts(char *str)
{
	while (*str != '\0')
	{
		ft_putc(*str);
		str++;
	}
}

int	is_printable_char(char c)
{
	return ((c < 32) || (c == 127)) ? 0 : 1;
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')	
	{
		if (is_printable_char(str[i]) == 1)
		{
			/* ft_puts("str[]") */
			/* printf("str[%d] = %c\n", i, str[i]); */
			/* printf("\tand dec ascii = %d\n", str[i]); */
			ft_puts("string \t");
			ft_putc(str[i]);
			ft_puts("\n and dec ascii = ");
			/* ft_putc(str[i] - '0'); */
			/* ft_putc((int)(str[i])); */
			/* ft_putc(65); */
			ft_puts("\n\n");
		}
		else
		{
			printf("str[%d] = %c\tNon-printable char\n", i, str[i]);
		}
		i++;
	}
}

