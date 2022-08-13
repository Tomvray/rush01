#include <stdlib.h>

int ft_atoi(char *str);
void print_solution(int tab[4][4]);
int process(int tab[4][4], int nbr[16], int pos);
void ft_putstr(char *str);

int *numbers(char *str)
{
	int i;
	int j;
	int *tab;

	if (!(tab = malloc(sizeof(int) * 16)))
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = ft_atoi(str + i);
		i++;
	return (tab);
}

int main(int argc, char **argv)
{
	int tab[4][4] = {{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};
	int *nbr;

	nbr = numbers(argv[1]);

	if (process(tab, nbr, 0) == 1)
		print_solution(tab);
	else
		ft_putstr("Error\n");
	return (0);
}