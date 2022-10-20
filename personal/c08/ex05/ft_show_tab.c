#include "ft_stock_str.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
				/* while (*(str)++) */
				while (*str)
				{
								write(1, str, 1);
								str++;
				}
}

void	ft_putnb(int nb)
{
				if (nb > 9)
								ft_putnb(nb / 10);
				write(1, &"0123456789"[nb % 10], 1);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

/* int	count_struct_len(struct s_stock_str *stocks) */
/* { */
/* int	index; */

/* index = 0; */
/* while (stocks[index] != NULL) */
/* while (!stocks[index]) */
/* while (!stocks[index]) */
/* 				index++; */
/* return (index); */
/* return (3); */

/* } */

void	ft_show_tab(struct s_stock_str *par)
{
				int	index;
				/* int	struct_len; */

				index = -1;
				/* struct_len = count_struct_len(par); */
				/* while (++index < struct_len) */
				while (par[++index].str != 0)
				{
								ft_putstr(par[index].str);
								ft_putstr("\n");
								/* ft_putstr((char*)par[index].size); */
								/* ft_putstr(); */
								/* printf("%d", par[index].size); */
								ft_putnb(par[index].size);
								ft_putstr("\n");
								ft_putstr(par[index].copy);
								ft_putstr("\n");
				}
}

