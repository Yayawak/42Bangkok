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

// dynamic allocated array
char	*get_alpha_arr(char *alp_arr)
{
	char	start_up;
	char	start_low;
	int	idx;

	start_low = 'a';
	start_up = 'A';
	idx = 0;

	/* char	alphabet_arr[26*2]; */
	/* char	alphabet_arr; */

	while (start_low <= 'z')
	{
		alp_arr[idx] = start_low;
		start_low++;
		idx++;
	}
	printf("Idx = %d\n", idx);
	while (start_up <= 'Z')
	{
		alp_arr[idx] = start_up;
		start_up++;
		idx++;
	}
	printf("Idx = %d\n", idx);
	print_arr(alp_arr);

	return alp_arr;
	/* return (alphabet_arr); */
}

int	ft_str_is_alpha(char *str)
{

	char	alphabet_arr[52];

	/* alphabet_arr = get_alpha_arr(); */
	get_alpha_arr(alphabet_arr);
	
	for (int i = 0; i < 52; i++)
	{
		for (int j = 0; j < ft_strlen(str); j++)
		{
		}
	}
	return (0);
}
