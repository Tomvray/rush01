
#include <stdlib.h>

void	print_solution(int tab[4][4]);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		process(int tab[4][4], int nbr[16], int pos);
int		ft_strlen(char *str);
int		test_possible(int argc, char **argv);

int	*numbers(char *str)
{
	int	i;
	int	j;
	int	*tab;

	if (!(tab = malloc(sizeof(int) * 16)))
		return (0);
	i = -1;
	j = 0;
	while (str[++i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
	return (tab);
}

int	main(int argc, char **argv)
{
	int	tab[4][4] = {{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};
	int	*nbr;

	if (test_possible(argc, argv) == 1)
		return (0);

	nbr = numbers(argv[1]);

	if (process(tab, nbr, 0) == 1)
		print_solution(tab);
	else
		ft_putstr("Error\n");
	return (0);
}