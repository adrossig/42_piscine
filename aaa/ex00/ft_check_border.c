/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_border.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:34:07 by judecuyp          #+#    #+#             */
/*   Updated: 2019/07/15 15:19:26 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		ft_check_top(int tab[4][4], int *border)
{
	int i;
	int j;
	int count;
	int max;

	count = 1;
	i = 0;
	while (i < 4)
	{
		max = 0;
		count = 1;
		j = 0;
		while (j < 3)
		{
			if (tab[j][i] > max)
				max = tab[j][i];
			if (tab[j][i] < tab[j + 1][i] && tab[j + 1][i] > max)
				count++;
			j++;
		}
		if (count != border[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_bottom(int tab[4][4], int *border)
{
	int i;
	int j;
	int count;
	int max;

	i = 0;
	count = 1;
	while (i < 4)
	{
		max = 0;
		count = 1;
		j = 3;
		while (j > 0)
		{
			if (tab[j][i] > max)
				max = tab[j][i];
			if (tab[j][i] < tab[j - 1][i] && tab[j - 1][i] > max)
				count++;
			j--;
		}
		if (count != border[i + 4])
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_left(int tab[4][4], int *border)
{
	int i;
	int j;
	int count;
	int max;

	i = 0;
	count = 1;
	while (i < 4)
	{
		count = 1;
		j = 0;
		max = 0;
		while (j < 3)
		{
			if (tab[i][j] > max)
				max = tab[i][j];
			if (tab[i][j] < tab[i][j + 1] && tab[i][j + 1] > max)
				count++;
			j++;
		}
		if (count != border[i + 8])
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_right(int tab[4][4], int *border)
{
	int i;
	int j;
	int count;
	int max;

	i = 0;
	count = 1;
	while (i < 4)
	{
		max = 0;
		count = 1;
		j = 3;
		while (j > 0)
		{
			if (tab[i][j] > max)
				max = tab[i][j];
			if (tab[i][j] < tab[i][j - 1] && tab[i][j - 1] > max)
				count++;
			j--;
		}
		if (count != border[i + 12])
			return (0);
		i++;
	}
	return (1);
}
