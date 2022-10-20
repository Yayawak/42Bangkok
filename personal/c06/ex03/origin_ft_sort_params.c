#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
		while (*s1 && *s1 == *s2)
		{
				s1++;
				s2++;
		}
		return (*s1 - *s2);
}

void	ft_strswap(char **a, char **b)
{
		char *c;

		c = *a;
		*a = *b;
		*b = c;
}

void	ft_sort_str_tab(char **tab, int size)
{
		char	*pivot;
		int		i;
		int		j;

		if (size < 2)
				return ;
		pivot = tab[--size];
		i = 0;
		j = -1;
		while (++j < size)
				if (ft_strcmp(tab[j], pivot) < 0)
						ft_strswap(&tab[i++], &tab[j]);
		if (ft_strcmp(tab[i], tab[size]) > 0)
				ft_strswap(&tab[i], &tab[size]);
		ft_sort_str_tab(tab, i);
		ft_sort_str_tab(tab + i + 1, size - i);
}

/* int	main(void) */
/* { */
/* 		char	*argv[4] = {"./filename.out", */
/* 				/1* "Word", "World", "Worn"}; *1/ */
/* 				"Word", "World", "Worn"}; */
/* 		int	argc = 4; */


/* 		int	i; */

/* 		i = 1; */
/* 		/1* ft_putstr("Before Reversion\n"); *1/ */
/* 		while (i < argc) */
/* 		{ */
/* 				ft_putstr(argv[i]); */
/* 				ft_putchar('\n'); */
/* 				i++; */
/* 		} */
/* 		ft_putstr("\nAfter Reversion\n"); */
/* 		ft_sort_str_tab(argv + 1, argc - 1); */
/* 		/1* printf("argv : \n%s\n", argv) *1/ */
/* 		/1* i = 0; *1/ */
/* 		i = 1; */
/* 		/1* while (++i < argc) *1/ */
/* 		while (i < argc) */
/* 		{ */
/* 				ft_putstr(argv[i]); */
/* 				ft_putchar('\n'); */
/* 				i++; */
/* 		} */
/* 		return (0); */
/* } */
/* int		main(int argc, char **argv) */
int		main(void)
{
		char	*argv[4] = {"./filename.out",
				/* "Word", "World", "Worn"}; */
				"Word", "World", "Worn"};
		int argc = 4;
		int i;

		ft_sort_str_tab(argv + 1, argc - 1);
		i = 0;
		while (++i < argc)
		{
				while (*argv[i])
						ft_putchar(*argv[i]++);
				ft_putchar('\n');
		}
		return (0);
}
