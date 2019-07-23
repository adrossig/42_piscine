/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_num_rows.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:23:27 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:31:41 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_bool		ft_get_number_rows(t_grid *grid, char *buffer, int *index)
{
	int	i;

	i = 0;
	while (buffer[i] >= 48 && buffer[i] <= 57 && buffer[i] != '\0')
		i++;
	if (buffer[i] == '\0')
		return (FALSE);
	*index = i;
	grid->rows = ft_atoi(ft_strndup(buffer, i));
	if (grid->rows < 1)
		return (FALSE);
	return (TRUE);
}
