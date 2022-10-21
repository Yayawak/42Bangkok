#include <unistd.h>
#include <stdbool.h>

void	ft_putc(char c)
{
				write(1, &c, 1);
}

void	ft_puts(char *str)
{
				while (*str)
								ft_putc(*(str)++);
}
bool	ft_is_space(char c)
{
				if ((c >= '\t' && c <= '\r') || c == ' ')
								/* if (c == '\0' || (c >= '\t' && c <= '\r')) */
								return (true);
				return (false);
}

void	print_first_word(char *str)
{
				int	idx;
				/* int	jdx; */
				int		sep_offset;
				char	*word;

				idx = 0;
				word = str;
				/* jdx = 0; */
				sep_offset = 0;
				while (ft_is_space(str[idx]))
								idx++;
				sep_offset = idx;
				while (true)
				{
								if (str[idx] == '\0')
												break;
								if (ft_is_space(str[idx]))
												break;
								idx++;
				}
				/* ft_puts() */
				if (word != 0)
								write(1, word + sep_offset, idx - sep_offset);

				/* while (ft_is_space(str[idx + jdx]) == false && str[idx + jdx] != '\0') */ 
				/* { */
				/* 				ft_putc(str[idx + jdx]); */
				/* 				/1* str[jdx] *1/ */
				/* 				jdx++; */
				/* } */

}

int		main(int ac, char **av)
{
				if (ac != 2)
				{
								ft_putc('\n');
								return (0);
				}
				/* av[1] = "FOR PONIES"; */
				char	*str = "FOR PONIES";

				/* str = av[1]; */
				print_first_word(str);
}
