#include <stdbool.h>

int	ft_str_length(char *str)
{
				int	index;

				index = 0;
				while (str[index])
								index++;
				return (index);
}

bool	is_space(char c)
{
				return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
												|| c == '\r' || c == ' ');
}

bool	is_base_valid(char *str)
{
				char	*curr;
				int	i;
				int	j;
				
				curr = str;
				if (str == 0 || ft_str_length(str) <= 1)
								return (false);
				while (*curr)
				{
								if (is_space(*curr) || *curr == '+' || *curr == '-')
												return (false);
								curr++;
				}
				i = 0;
				while (i < curr - str)
				{
								j = i + 1;
								while (j < curr - str)
								{
												if (str[i] == str[j++])
																return (false);
								}
								i++;
				}
				return (true);
}

// cnl(1203, 10, false)
int compute_number_length(unsigned int number, int radix, bool negative)
{
				unsigned int	length;

				// length = 0;
				length = negative ? 1 : 0;
				while (true)
				{
								// 0. length = 1
								// 1. legnth = 2
								// 2. lenght = 3
								// 3. lenght = 4
								length++;
								// 0. (1203 / 10 == 0) ?
								// 1. 120 / 10 == 12 != 0 
								// 2. 12 / 10 == 1 != 0
								// 3. (1 / 10 = 0 ) == (0) --> Exit loop
								if (number / radix == 0)
												break;
								// 0. (1203 = 1203 / 10) == (120) --> number = 120
								// 1. (120 = 120 / 10) --> number = 12
								// 2. 12 = 12 / 10 --> number = 1
								number /= radix;
				}
				// 3. length = 4
				return (length);
}
