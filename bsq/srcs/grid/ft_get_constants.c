/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_constants.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:19:21 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:31:37 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_bool		ft_get_constants(t_grid *grid, char *buffer)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if (buffer[i] == '\0')
			return (FALSE);
		if (i == 0)
			grid->empty_cell = buffer[i];
		if (i == 1)
			grid->obstacle_cell = buffer[i];
		if (i == 2)
			grid->cell_availabe = buffer[i];
		i++;
	}
	if (buffer[i] != '\n')
		return (FALSE);
	return (TRUE);
}
