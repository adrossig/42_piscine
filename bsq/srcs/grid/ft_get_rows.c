/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rows.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:46:13 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:31:59 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			ft_get_row_length(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	return (i);
}

t_bool		ft_get_rows(t_grid *grid, char *buffer)
{
	int	row;
	int	length;

	if (*buffer == '\0')
		return (FALSE);
	if ((grid->lines = (char**)malloc(sizeof(char*) * grid->rows + 1)) == NULL)
		return (FALSE);
	row = 0;
	while (row < grid->rows)
	{
		length = ft_get_row_length(buffer);
		grid->lines[row] = ft_strndup(buffer, length);
		grid->lines[row][length] = '\0';
		buffer = buffer + length;
		if (*buffer != '\n')
			return (FALSE);
		buffer++;
		row++;
	}
	if (*buffer != '\0')
		return (FALSE);
	grid->lines[row] = NULL;
	return (TRUE);
}
