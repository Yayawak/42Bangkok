#include <stdio.h>

int	ft_strlen(char *str)
{
	int	strlen;

	for (strlen = 0; *str != '\0'; str++)
		strlen++;	
	return (strlen);
}

void	print_arr(char *str)
{
	for (; *str != '\0'; str++)
		printf("%c\t", *str);
}

char	*get_alpha_arr()
{
	char	start_up;
	char	start_low;
	int	idx;

	start_low = 'a';
	start_up = 'A';
	idx = 0;

	static	char	alphabet_arr[26*2];

	while (start_low <= 'z')
	{
		alphabet_arr[idx] = start_low;
		start_low++;
		idx++;
	}
	printf("Idx = %d\n", idx);
	while (start_up <= 'Z')
	{
		alphabet_arr[idx] = start_up;
		start_up++;
		idx++;
	}
	printf("Idx = %d\n", idx);
	print_arr(alphabet_arr);

	return (alphabet_arr);
	/* return (alphabet_arr); */
}

int	ft_str_is_alpha(char *str)
{

	/* char	alphabet_arr[52]; */
	char	*p_alphabet_arr;

	/* alphabet_arr = get_alpha_arr(); */
	p_alphabet_arr = get_alpha_arr();
	
	for (int i = 0; i < 52; i++)
	{
		for (int j = 0; j < ft_strlen(str); j++)
		{
		}
	}
	return (0);
}
