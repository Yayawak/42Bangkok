#include <stdio.h>
#include <string.h>

void	text_split(char *str)
{
	char	new_str[10][10];
	int	i, i_words, ctr;
	printf("\n\n Split string by spacing into words : \n");
	printf("------------------------------------------\n");

	/* printf("Input a string :"); */
	/* fgets(str, sizeof str, stdin); */

	i_words = 0;
	ctr = 0;

	for (i = 0; i < (strlen(str)); i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			new_str[ctr][i_words] = '\0';
			ctr++; // for next word
			i_words = 0; // for next word, init index = 0
		}
		else
		{
			new_str[ctr][i_words] = str[i];
			i_words++;
		}
	}

	printf("\n Strings or words after split by space are : \n");
	for (i = 0; i < ctr; i++)
		printf(" %s\n", new_str[i]);
}

int	main(void)
{
	/* char	str1[100]; */
	char	*str1;

	str1 = "This code algoitms is very hard to think what the hell";
	text_split(str1);
}
