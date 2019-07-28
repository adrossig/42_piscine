/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 14:48:16 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/18 10:04:18 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char				*ft_strdup(char *src)
{
	char	*locma;
	int		i;

	i = 0;
	if (!(locma = (char *)malloc(ft_strlen(src) + 1)))
		return (NULL);
	while (src[i])
	{
		locma[i] = src[i];
		i++;
	}
	locma[i] = '\0';
	return (locma);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*locma;
	int				a;

	a = 0;
	if (!(locma = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (a < ac)
	{
		locma[a].size = ft_strlen(av[a]);
		locma[a].str = av[a];
		locma[a].copy = ft_strdup(locma[a].str);
		a++;
	}
	locma[a].str = 0;
	return (locma);
}
