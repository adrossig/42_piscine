/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 09:44:20 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 14:57:24 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int		ft_something(char *str)
{
	int *locma;
	int k;

	k = 0;
	if (!(locma = (int *)malloc(sizeof(int) * (ft_strlen(str) + 1))))
		return (0);
	while (k < ft_strlen(str))
	{
		locma[k] = str[k] - 48;
		k++;
	}
	locma[k] = 0;
	return (*locma);
}
