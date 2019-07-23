/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:48:04 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:32:09 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_remove_grid(t_grid *grid)
{
	int i;

	i = 0;
	while (grid->lines[i])
	{
		free(grid->lines[i]);
		i++;
	}
	free(grid);
}
