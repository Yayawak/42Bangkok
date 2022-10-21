#include <unistd.h>

void	ft_putchar(char c)
{
				write(1, &c, 1);
}

void	ft_putstr(char *str)
{
				while (*str)
								ft_putchar(*(str++));
}

int		is_char_in_str(char c, char *str)
{
				while (*str != '\0')
				{
								if (c == *str)
												return (1);
								str++;
				}
				return (0);
}

/* int		main(int argc, char **argv) */
int		main(void)
{
				/* char	*str = "Strong feeling."; */
				/* argv[1] = "Strong feeling."; */
				/* argv[1] = "abc"; */

				/* while (*argv) */
				/* { */

				/* 				argv++; */
				/* } */
				write(1, "a\n", 2);
				return (0);
}
