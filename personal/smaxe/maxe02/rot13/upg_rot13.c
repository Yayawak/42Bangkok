#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

bool	is_upper(char c)
{
				return (c >= 'A' && c <= 'Z');
}

bool	is_lower(char c)
{
				return (c >= 'a' && c <= 'z');
}

void	ft_puts(char *str)
{
				while (*str != '\0')
				{
								write(1, str, 1);
								str++;
				}
}

char	get_char_rot13(char c)
{
				unsigned char	c0;
				char					max;

				if (is_lower(c))
								max = 'z';
				else
								max = 'Z';
				c0 = c + 13;
				if (c0 > max)
								c0 -= 26;
				return (c0);
}

void	rot13(char *str)
{
				while (*str)
				{
								if (is_lower(*str) || is_upper(*str))
								{
												printf("Hello\n");
												*str = get_char_rot13(*str);

								}
								/* ft_puts(str); */
								write(1, str, 1);
								str++;
				}
}
int		main(void)
{
				char	*str = "abc_ABC";
				rot13(str);
				/* int		cur_nb; */
				/* char		cur_nb; */

				/* while (*str) */
				/* { */
				/* 				char		cur_nb; */

				/* 				/1* cur_nb = (*str + 13) % 26; *1/ */
				/* 				cur_nb = (*str + 13); */
				/* 				/1* cur_nb %= 26; *1/ */
				/* 				/1* ft_puts(cur_nb); *1/ */
				/* 				/1* ft_puts((char)cur_nb); *1/ */
				/* 				/1* ft_puts(&(char)cur_nb); *1/ */
				/* 				/1* printf("original char : %c : \n\t code %d\n", *str, cur_nb); *1/ */
				/* 				printf("original char : %c : \t code %c\n", *str, cur_nb); */
				/* 				/1* printf("original char : %c : \n", *str); *1/ */
				/* 				/1* ft_puts(str); *1/ */
				/* 				/1* printf("code : %d\n", cur_nb); *1/ */
				/* 				str++; */
				/* } */
}
