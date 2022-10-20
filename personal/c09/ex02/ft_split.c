#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

bool	is_char_in_string(char c, char *charset)
{
		while (*charset)
		{
				if (c == *charset)
						return (true);
				
				charset++;
		}
		return (false);

}

int		count_occur(char *str, char *charset)
{
		int		count;
		int		idx;
		char	*prev;
		char	*next;

		count = 0;
		prev = str;
		next = str;
		idx = 0;
		while (true)
		{
				if (is_char_in_string(str[idx], charset))
						next = str;
				if ((next - prev) > 1)
						count++;
				if (str[idx] == '\0')
						break;
				prev = next;
				str++;
		}
		return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
/* int		shift_idx_to_next_word(char	**arr_strs, int p_idx, int size, char *charset) */
int		shift_idx_to_next_word(char	**arr_strs, char *prev_w, int word_size, char *charset)
{
		if (is_char_in_string(prev_w[0], charset))
		{
				prev_w++;
				word_size--;
		}
		*arr_strs = (char *)malloc((word_size + 3) * sizeof(char));
		ft_strncpy(*arr_strs, prev_w, word_size);
		(*arr_strs)[word_size] = '\0';
		(*arr_strs)[word_size + 1] = '\0';
		return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr_strs;
	int		cur_word_size;
	int		p_idx;
	int		n_idx;

	arr_strs = (char **)malloc(sizeof(char *) * count_occur(str, charset) + 1);
	p_idx = 0;
	n_idx = 0;
	while (true)
	{
			if (is_char_in_string(*str, charset))
					/* next_word = str[index]; */
					n_idx = p_idx;
			cur_word_size = p_idx - n_idx;
			if (cur_word_size >= 1)
					n_idx += shift_idx_to_next_word(&arr_strs[n_idx], &str[p_idx], cur_word_size, charset);
			if (str[n_idx] == '\0')
					break ;
			p_idx = n_idx;
			n_idx++;
	}
	arr_strs[n_idx] = 0;
	return (arr_strs);
}
