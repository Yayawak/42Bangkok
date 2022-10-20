#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_putstr(char *p_str)
{
		while (*p_str != '\0')
		{
				ft_putchar(*p_str);
				p_str++;
		}

}

int	ft_strcmp(char *s1, char *s2)
{
		int	i;

		i = 0;
		while ((s1[i] != '\0') || (s2[i] != '\0'))
		{
				if (s1[i] != s2[i])
				{
						printf("\n\nS 1 = %s\n", s1);
						printf("S 2 = %s\n", s2);
						printf("Compare result = %d\n\n", (s1[i] - s2[i]));
						return (s1[i] - s2[i]);

				}
				i++;
		}
		return (0);
}


void	display_bef_aff_swap(char *s1, char *s2)
{
		printf("Before swapping\n");
		printf("s1 = %s\t s2 = %s\n", s2, s1);
		printf("p1 = %p\t p2 = %p\n", &s2, &s1);

		printf("After swapping\n");
		/* printf("s1 = %s\t s2 = %s\n", s1, s2); */
		printf("s1 = %s\t s2 = %s\n", s1, s2);
		printf("p1 = %p\t p2 = %p\n\n", &s1, &s2);
}

void	ft_strswap(char **a, char **b)
/* void	ft_strswap(char *a, char *b) */
{
		char	*t;

		display_bef_aff_swap(*a, *b);
		t = *a;
		*a = *b;
		/* a = b; */
		*b = t;
		display_bef_aff_swap(*a, *b);
		/* display_bef_aff_swap(*b, *a); */
		ft_putstr("\n\n");
}
// tab is array of string ["world", "word", "worn"]
void	ft_sort_str_tab(char **tab, int size)
{
		char	*pivot;
		int		i;
		int		j;

		if (size < 2)
				return ;
		pivot = tab[--size];
		i = 0;
		/* j = -1; */
		j = 0;
		/* while (++j < size) */
		while (j < size)
		{
				if (ft_strcmp(tab[j], pivot) < 0)
				{
						/* ft_strswap(&tab[i++], &tab[j]); */
						ft_strswap(&tab[i], &tab[j]);
						i++;
				}
				j++;
		}
		if (ft_strcmp(tab[i], tab[size]) > 0)
				ft_strswap(&tab[i], &tab[size]);
		ft_sort_str_tab(tab, i);
		ft_sort_str_tab(tab + i + 1, size - i);
}


int	main(int argc, char **argv)
{
		int	i;

		i = 1;
		ft_putstr("Before Reversion\n");
		while (i < argc)
		{
				ft_putstr(argv[i]);
				ft_putchar('\n');
				i++;
		}
		ft_putstr("\nAfter Reversion\n");
		ft_sort_str_tab(argv + 1, argc - 1);
		/* printf("argv : \n%s\n", argv) */
		/* i = 0; */
		i = 1;
		/* while (++i < argc) */
		while (i < argc)
		{
				ft_putstr(argv[i]);
				ft_putchar('\n');
				i++;
		}
		return (0);
}
