/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 11:29:29 by judecuyp          #+#    #+#             */
/*   Updated: 2019/07/15 16:03:53 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int g_count = 0;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int tab[4][4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar(tab[i][j] + '0');
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

// Check si le numero n'est pas deja utiliser dans les cases precedentes
int		ft_check(int tab[4][4], int i, int j)
{
	int booleen;
	int cmpt_i;
	int cmpt_j;

	booleen = 0;
	cmpt_i = i;
	cmpt_j = 0;
	while (tab[cmpt_i][cmpt_j] != tab[i][j] && cmpt_j < 4)
		cmpt_j++;
	if (cmpt_j == j)
		booleen++;
	cmpt_i = 0;
	cmpt_j = j;
	while (tab[cmpt_i][cmpt_j] != tab[i][j] && cmpt_i < 4)
		cmpt_i++;
	if (cmpt_i == i)
		booleen++;
	if (booleen == 2)
		return (1);
	return (0);
}

// Algo backtracking
void	ft_back(int tab[4][4], int row, int col, int *border)
{
	tab[row][col] = 1;
	while (tab[row][col] < 5)
	{
		if (ft_check(tab, row, col))
		{
			if (row == 3 && col == 3)
			{
				if (ft_check_right(tab, border)
					&& ft_check_left(tab, border)
					&& ft_check_bottom(tab, border)
					&& ft_check_top(tab, border) && g_count < 1)
				{
					ft_print(tab);
					g_count += 1;
				}
			}
			else if (col < 3)
				ft_back(tab, row, col + 1, border);
			else if (col == 3)
				ft_back(tab, row + 1, 0, border);
		}
		tab[row][col]++;
	}
}

int		main(int argc, char **argv)
{
	int tab[4][4];
	int *border;
	int col;
	int row;

	if (argc != 2 || !(ft_check_args(argv[1])))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	border = ft_split(argv[1]);
	col = 0;
	row = 0;
	ft_back(tab, row, col, border);
	if (g_count == 0)
		write(1, "Error\n", 6);
	return (0);
}
