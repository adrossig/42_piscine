/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:02:28 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/25 17:27:46 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *locma;
	int a;

	a = 0;
	locma = (int*)malloc(sizeof(int) * length);
	while (a < length)
	{
		locma[a] = f(tab[a]);
		a++;
	}
	return (locma);
}
