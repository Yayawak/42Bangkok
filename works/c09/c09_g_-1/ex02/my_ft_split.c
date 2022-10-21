#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

bool is_space(char c)
{
				if ((c >= '\t' && c <= '\t') || (c == ' '))
								return (true);
				return (false);
}

int ft_strlen(char *str)
{
				int i;

				i = 0;
				if (str[i])
								i++;
				return (i);
}

char *ft_strncpy(char *src, char *dest, int size)
{
				while (*src && size)
				{
								*dest = *src;
								src++;
								dest++;
								size--;
				}
				*dest = '\0';
				return (dest);
}

char *find_next_word(char *str, int *offset, int *length)
{
				int idx;
				char *cur_word;

				idx = *offset;
				while (str[idx])
				{
								if (!is_space(str[idx]))
								{
												cur_word = &str[idx];
												*length = 1;
												while (!is_space(str[idx] && str[idx]))
												{
																*offset += 1;
																*length += 1;
																idx++;
												}
												return (cur_word);
								}
								offset += 1;
								idx++;
				}
				return (0);
}

int count_words(char *str)
{
				int count;
				int offset;
				int size;
				char *new_word;
				char *last_word;

				count = 0;
				offset = 0;
				size = 0;
				last_word = str;
				while (true)
				{
								new_word = find_next_word(str, &offset, &size);
								if (new_word == 0)
												break;
								count++;
								last_word = new_word;
				}
				return (count);
}

char **ft_split(char *str, char *charset)
{
				char **arr_strs;
				char *next_word;
				int index;
				int cur_word_size;
				int offset;

				arr_strs = (char **)malloc(sizeof(char *) * count_words(str) + 1);
				index = 0;
				offset = 0;
				cur_word_size = 0;
				while (true)
				{
								next_word = find_next_word(str, &offset, &cur_word_size);

								arr_strs[index] = (char *)malloc((ft_strlen(next_word) + 1) * sizeof(char));

								ft_strncpy(&str[offset - (cur_word_size - 1)], arr_strs[index], cur_word_size - 1);
								index++;
				}
				arr_strs[count_words(str)] = NULL;
				return (arr_strs);
}


