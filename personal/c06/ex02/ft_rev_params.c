#include <unistd.h>

void	ft_putstr(char *str)
{
		while (*str != '\0')
		{
				write(1, str, 1);
				str++;
		}
}

int	main(int argc, char **argv)
{
		int	i;

		i = 0;
		while (i < argc - 1)
		{
				ft_putstr(argv[(argc - 1) - i]);
				ft_putstr("\n");
				i++;
		}
		return (0);
}
