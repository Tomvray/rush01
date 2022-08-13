int check_colup(int tab[4][4], int pos, int nbr[16])
{
	return (0);
}

int check_rowright(int tab[4][4], int pos, int nbr[16])
{
	return (0);
}

int check_coldown(int tab[4][4], int pos, int nbr[16])
{
	return (0);
}

int check_rowleft(int tab[4][4], int pos, int nbr[16])
{
	return (0);
}

int check(int tab[4][4], int pos, int nbr[16])
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