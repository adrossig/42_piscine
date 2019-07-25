/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:33:07 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/20 15:08:09 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int temp;

	temp = 0;
	while ((s1[temp] || s2[temp]) && (s1[temp] == s2[temp]))
		temp++;
	return (s1[temp] - s2[temp]);
}
