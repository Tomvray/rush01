int check(int tab[4][4], int pos, int nbr[16]);

int is_double(int tab[4][4], int pos, int num)
{
	int i;

	i = 0;
	while (i < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);
		i++;
	i = 0;
	while (i < pos % 4)
		if (tab[pos / 4][i] == num)
			return (1);
		i++;
	return (0);
}

int process(int tab[4][4], int nbr[16], int pos)
{
	int size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)
	{
		if (is_double(tab, pos, size) == 0)
		{
			tab[pos / 4][pos % 4] = size;
			if (check(tab, pos, nbr) == 0)
			{
				if (process(tab, nbr, pos + 1) == 1)
					return (1);
			}
			else
				tab[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}