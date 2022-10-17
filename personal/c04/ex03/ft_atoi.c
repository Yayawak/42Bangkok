#include "unistd.h"
#include <stdio.h>

void	ft_putc(char c)
{
		write(1, &c, 1);
}

int	ft_isspace(char c)
{
		if (((c >= '\a') && (c <= '\r')) || (c == ' '))
		/* if (((c >= 9) && (c <= 13)) || (c == 32)) */
				return (1);
		return (0);
}

int	ft_is_digit(char c)
{
		if (((c >= '0') && (c <= '9')))
				return (1);
		return (0);
}

/* ft_atoi("---+---+1234ab567"); */
// ft_atoi("+---+1234ab567"); sign = -
int	ft_atoi(char *str)
{
		int	i;
		int nb;
		int	sign;

		i = 0;
		/* sign = -1; */
		nb = 0;
		sign = 1;
		while (str[i] != '\0')
		{
				if (str[i] == '-')
				{
						sign *= -1;
				}
				else if (str[i] == '+')
				{
						sign *= 1;
				}
				else if (ft_isspace(str[i]) == 1)
				/* if (ft_isspace(str[i] == 1)) */
				{
						/* write(1, "space", 5); */
						/* printf("space %c\n", str[i]); */
						i++;
						continue;
				}
				else if (ft_is_digit(str[i]) != 1)
						break;
				else if (ft_is_digit(str[i]) == 1)
				{
						// 10 ^ x : x = {1, 2, 3} // power of ten
						/* str[i] *= 10 */
						/* nb *= 10 + '0'; */
						// 1000 + 200 + 30  + 4
						// 0 *= 10 -> 0
						// round 2 : 1 *= 10 -> 10
						nb *= 10;
						//
						// 0 += '1' - '0' // 49 - 48 = 1
						// nb = 1
						// r 2 : 10 += '2' - '0' = 2
						// nb = 10 + 2 = 12
						nb += str[i] - '0'; // 48
						/* nb = nb + '0'; // 48 */
						
				}
				/* ft_putc(str[i]); */
				i++;
		}
		/* ft_putc(sign + '0'); */
		/* printf("sign = %d \n", sign); */
		return (sign * nb);
}
