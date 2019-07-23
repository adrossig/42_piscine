/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:42:12 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:40:00 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_bool		ft_parse_grid(char *buffer, t_grid *grid)
{
	int	index;

	if (ft_get_number_rows(grid, buffer, &index) == FALSE)
		return (FALSE);
	if (ft_get_constants(grid, buffer + index) == FALSE)
		return (FALSE);
	if (ft_get_rows(grid, buffer + index + 4) == FALSE)
		return (FALSE);
	if (ft_check_dimensions(grid) == FALSE)
		return (FALSE);
	return (TRUE);
}
