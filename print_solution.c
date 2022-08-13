void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	print_solution(int tab[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(tab[i][j]);
			if (j != 3)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}