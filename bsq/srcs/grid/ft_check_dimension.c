/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dimension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:13:14 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:22:52 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_bool	ft_check_dimensions(t_grid *grid)
{
	int	i;
	int	j;

	grid->cols = ft_strlen(grid->lines[0]);
	if (grid->cols < 1)
		return (FALSE);
	i = 0;
	while (i < grid->rows)
	{
		if (grid->lines[i] == NULL || grid->cols != ft_strlen(grid->lines[i]))
			return (FALSE);
		j = 0;
		while (j < grid->cols)
		{
			if (grid->lines[i][j] != grid->empty_cell
				&& grid->lines[i][j] != grid->obstacle_cell
				&& grid->lines[i][j] != grid->cell_availabe)
				return (FALSE);
			j++;
		}
		i++;
	}
	if (i != grid->rows)
		return (FALSE);
	return (TRUE);
}
