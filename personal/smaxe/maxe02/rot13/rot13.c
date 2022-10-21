#include <unistd.h>
#include <stdio.h>

void	ft_puts(char *str)
{
				while (*str)
				{
								write(1, str, 1);
								str++;
				}
}

int		main(void)
{
				char	*str = "abc_ABC";
				/* int		cur_nb; */
				/* char		cur_nb; */

				while (*str)
				{
								char		cur_nb;

								/* cur_nb = (*str + 13) % 26; */
								cur_nb = (*str + 13);
								/* cur_nb %= 26; */
								/* ft_puts(cur_nb); */
								/* ft_puts((char)cur_nb); */
								/* ft_puts(&(char)cur_nb); */
								/* printf("original char : %c : \n\t code %d\n", *str, cur_nb); */
								printf("original char : %c : \t code %c\n", *str, cur_nb);
								/* printf("original char : %c : \n", *str); */
								/* ft_puts(str); */
								/* printf("code : %d\n", cur_nb); */
								str++;
				}
}
