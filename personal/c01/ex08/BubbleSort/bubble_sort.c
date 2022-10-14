void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	b_sort(int list[], int n)
{

	for (int  i = 0; i < (n - 1); i++)
	{
		for (int j = 0; j < ( n - (i + 1) ); j++)
		{
			if (list[j] > list[i])
			{
				swap(&list[i], &list[j]);
			}
		}
	}
}
