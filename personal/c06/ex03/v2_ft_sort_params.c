#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_putstr(char *p_str)
{
		while (*p_str)
				ft_putchar(*(p_str)++);
}

int	ft_strcmp(char *s1, char *s2)
{
		/* while ((s1[i] != '\0') || (s2[i] != '\0')) */
		while (*s1 != '\0' && (*s1 == *s2))
		{
				s1++;
				s2++;
		}
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
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
{
		char	*t;

		/* display_bef_aff_swap(*a, *b); */
		t = *a;
		*a = *b;
		*b = t;
		/* display_bef_aff_swap(*a, *b); */
		/* display_bef_aff_swap(*b, *a); */
		/* ft_putstr("\n\n"); */
}
// tab is array of string ["world", "word", "worn"]
void	ft_sort_str_tab(char **arr, int size, int offset)
{
		int	index;
		bool swapped;

		index = offset;
		while (true)
		{
				index = offset;
				swapped = false;
				while (index < size)
				{
						if (ft_strcmp(arr[index], arr[index + 1]) > 0)
						{
								ft_strswap(&arr[index], &arr[index + 1]);
								swapped = true;
						}
						index++;
				}
				if (!swapped)
						break;
		}
}


int	main(int argc, char **argv)
/* int	main(void) */
{
		/* char	*argv[4] = {"./filename.out", */
		/* 		"Word", "World", "Worn"}; */
		/* int	argc = 4; */


		if (argc > 2)
				ft_sort_str_tab(argv, argc - 1, 1);
		int	i;
		i = 0;
		while (++i < argc)
		{
				ft_putstr(argv[i]);
				ft_putchar('\n');
		}
		return (0);
}
