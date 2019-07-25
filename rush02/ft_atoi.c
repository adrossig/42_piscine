/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:12:35 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/20 15:07:36 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	nb = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == 45)
		neg = 1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	return (neg == 1 ? -nb : nb);
}
