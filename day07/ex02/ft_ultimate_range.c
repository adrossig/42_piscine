/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 13:25:19 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/17 14:15:22 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int				*locma;
	long long		i;
	long long		size;

	size = max - min;
	if (size > 2147483647)
		return (-1);
	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	locma = malloc(sizeof(*locma) * size);
	if (locma == NULL)
		return (-1);
	while (i < size)
	{
		locma[i] = min + i;
		i++;
	}
	*range = locma;
	return (i);
}
