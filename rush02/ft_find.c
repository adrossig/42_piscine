/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:31:51 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 22:39:33 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*find_line(char **tab, int nb)
{
	int i;

	i = 0;
	if (nb < 1000 && nb >= 0)
	{
		while (tab[i] != '\0')
		{
			if (ft_atoi(tab[i]) == nb)
				return (tab[i]);
			i++;
		}
	}
	if (nb < 0)
		return (ft_if_forest(tab, nb));
	return (NULL);
}

char	*ft_if_forest(char **tab, int nb)
{
	if (nb == -1)
		return (find_more(tab, 3));
	if (nb == -2)
		return (find_more(tab, 6));
	if (nb == -3)
		return (find_more(tab, 9));
	if (nb == -4)
		return (find_more(tab, 12));
	if (nb == -5)
		return (find_more(tab, 15));
	if (nb == -6)
		return (find_more(tab, 18));
	if (nb == -7)
		return (find_more(tab, 21));
	if (nb == -8)
		return (find_more(tab, 24));
	if (nb == -9)
		return (find_more(tab, 27));
	if (nb == -10)
		return (find_more(tab, 30));
	if (nb == -11)
		return (find_more(tab, 33));
	if (nb == -12)
		return (find_more(tab, 36));
	return (NULL);
}

char	*find_more(char **tab, int n)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		if (tab[i][0] == '1')
		{
			j = 1;
			while (tab[i][j] == '0' && j <= n + 1)
				j++;
			if (j == n + 1)
				return (tab[i]);
		}
		i++;
	}
	return (NULL);
}
