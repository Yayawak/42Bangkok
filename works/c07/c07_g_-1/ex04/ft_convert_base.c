#include <stdbool.h>
#include <stdlib.h>
#include "ft_convert_base2.c"

#define NO_MATCH -1

/* int	ft_str_length(char *str); */
/* int	compute_number_length(unsigned int number, int radix, bool negative); */
/* bool	is_space(char c); */
/* bool	is_base_valid(char *str); */

int	get_base_num_name(char *base, char match)
{
				int	index;

				index = 0;
				// 0123456789abcdef
				//                16 is what we want to return
				while (base[index])
				{
								if (base[index] == match)
												return (index);
								index++;
				}
				return (NO_MATCH);
}

char	*ft_buffer_base(char *base, unsigned int number, bool negative)
{
				int	index;
				int	radix;
				int	length;
				char *string;

				radix = ft_str_length(base);
				length = compute_number_length(number, radix, negative);
				if (!(string = (char *)malloc((length + 1) * sizeof(char))))
								return (0);
				if (negative)
								string[0] = '-';
				index = negative ? 1 : 0;
				while (index < length)
				{
								// base = "0123456789abcdef"
								string[length - (!negative) - index++] = base[number % radix];
								number /= radix;
				}
				string[length] = '\0';
				return (string);
}

char	*ft_convert_base(char	*nbr, char *base_from, char *base_to)
{
				int						radix;
				int						sign;
				int						base_num_name; // 2, 3, 8, 16
				unsigned int	result;

				if (!is_base_valid(base_from) || !is_base_valid(base_to))
								return (NULL);
				radix = ft_str_length(base_from);
				result = 0;
				sign = 1;
				// skip space --> shift pointer to not space character
				while (is_space(*nbr))
								nbr++;
				while (*nbr == '+' || *nbr == '-')
								if (*(nbr++) == '-')
												sign *= -1;
				while ((base_num_name = get_base_num_name(base_from, *nbr)) != NO_MATCH)
				{
								// result *= 10
								// result += str[i]  // gradullay shift digit to right --> then add 
								result *= radix; // atoi concept --> result *= 16
								result += base_num_name; //      --> result += str[i]
								nbr++;
				}
				sign = (result == 0) ? 1 : sign;
				return (ft_buffer_base(base_to, result, (sign > 0 ? false : true)));

}
