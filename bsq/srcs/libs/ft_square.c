/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:21:51 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:37:54 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_square	*ft_create_square(int x, int y, int size)
{
	t_square *square;

	square = (t_square*)malloc(sizeof(t_square));
	if (square == NULL)
		return (NULL);
	square->x = x;
	square->y = y;
	square->size = size;
	return (square);
}

t_square	*ft_update_square(t_square *square, int size)
{
	square->size = size;
	return (square);
}

t_square	*ft_square_cmp(t_square *square_1, t_square *square_2)
{
	if (square_1 == NULL)
		return (square_2);
	if (square_2 == NULL)
		return (square_1);
	return ((square_1->size > square_2->size) ? square_1 : square_2);
}
