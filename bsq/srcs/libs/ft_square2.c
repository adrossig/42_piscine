/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:32:49 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:31:08 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_bool	ft_check_square(t_grid *grid, int x1, int y1, int size)
{
	int	x2;
	int	y2;
	int	i;
	int	j;

	x2 = x1 + size;
	y2 = y1 + size;
	i = y1;
	while (i < y2)
	{
		j = x1;
		while (j < x2)
		{
			if (grid->lines[i][j] == grid->obstacle_cell)
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

t_square	*ft_get_bigger_square(t_grid *grid, int x1, int y1)
{
	t_square *square;
	int	y2;
	int	x2;

	y2 = y1;
	x2 = x1;
	square = ft_create_square(x1, y1, 0);
	if (square == NULL)
		return (NULL);
	while (y2 < grid->rows && x2 < grid->cols)
	{
		if (ft_check_square(grid, x1, y1, y2 - y1) == FALSE)
			return (square);
		square = ft_update_square(square, y2 - y1);
		x2++;
		y2++;
	}
	return (square);
}

void	ft_find_bigger_square(t_grid *grid)
{
	int x;
	int	y;
	t_square *square;
	t_square *square_tmp;

	y = 0;
	square = NULL;
	while (grid->lines[y])
	{
		x = 0;
		while (grid->lines[y][x])
		{
			if (grid->lines[y][x] != grid->obstacle_cell)
			{
				square_tmp = ft_get_bigger_square(grid, x, y);
				if (square_tmp == NULL)
					continue ;
				square = ft_square_cmp(square_tmp, square);
			}
			x++;
		}
		y++;
	}
	printf("Result: x=%i y=%i size=%i\n", square->x, square->y, square->size);
	ft_putstr("ok");
}
