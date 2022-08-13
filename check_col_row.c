int	check_colup(int tab[4][4], int pos, int nbr[16])
{
	int	i;
	int	max;
	int	count;

	i = -1;
	max = 0;
	count = 0;
	if ((pos / 4) == 3)
	{
		while (++i < 4)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
		}
		if (nbr[pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_rowright(int tab[4][4], int pos, int nbr[16])
{
	int i;
	int max_size;
	int nbr_tower;

	i = 4;
	max_size = 0;
	nbr_tower = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max_size)
			{
				max_size = tab[pos / 4][i];
				nbr_tower++;
			}
		}
		if (nbr[12 + pos / 4] != nbr_tower)
			return (1);
	}
	return (0);
}

int	check_coldown(int tab[4][4], int pos, int nbr[16])
{
	int	i;
	int	max;
	int	count;

	i = 4;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[i][pos % 4] > max)
			{
				max = tab[i][pos % 4];
				count++;
			}
		}
		if (nbr[4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_rowleft(int tab[4][4], int pos, int nbr[16])
{
	int i;
	int max;
	int count;

	i = -1;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (++i < 4)
		{
			if (tab[pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
		}
		if (nbr[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	check(int tab[4][4], int pos, int nbr[16])
{
	if (check_rowleft(tab, pos, nbr) == 1)
		return (1);
	if (check_rowright(tab, pos, nbr) == 1)
		return (1);
	if (check_coldown(tab, pos, nbr) == 1)
		return (1);
	if (check_colup(tab, pos, nbr) == 1)
		return (1);
	return (0);
}