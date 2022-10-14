void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp_arr[size];

	// added reversed pos by sand watch method
	for (int k = size - 1, v = 0; k > -1; k--, v++)
	{
		tmp_arr[v] = tab[k];
	}
	// clone tmp array which is completed task to original array
	for (int i = 0; i < size; i++)
	{
		tab[i] = tmp_arr[i];
	}
}
