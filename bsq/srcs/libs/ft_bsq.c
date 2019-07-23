/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:17:31 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:32:19 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_bsq(char *buffer, t_bool *error)
{
	t_grid *grid;

	grid = (t_grid*)malloc(sizeof(t_grid));
	if (grid == NULL)
		return ;
	if (ft_parse_grid(buffer, grid) == FALSE)
	{
		*error = TRUE;
		free(grid);
		return ;
	}
	ft_putstr("CHECK OK!\n");
	ft_find_bigger_square(grid);
	ft_remove_grid(grid);
}
