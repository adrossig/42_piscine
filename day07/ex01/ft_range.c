/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 10:42:36 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/18 10:11:43 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int			*locma;
	long long	i;
	long long	size;

	if (min >= max)
	{
		locma = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	locma = malloc(sizeof(*locma) * size);
	if (locma == NULL)
		return (0);
	while (i < size)
	{
		locma[i] = min + i;
		i++;
	}
	return (locma);
}
