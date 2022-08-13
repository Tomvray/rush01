int	check(int tab[4][4], int pos, int nbr[16]);
int	ft_strlen(char *str);

int	test_possible(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	return (0);
}

int	is_double(int tab[4][4], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (tab[pos / 4][i] == num)
			return (1);
	return (0);
}

int	process(int tab[4][4], int nbr[16], int pos)
{
	int	size;

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