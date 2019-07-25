/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:57:45 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/20 15:07:03 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

char	*ft_strdup(char *src)
{
	char	*locma;
	int		i;

	i = 0;
	if (!(locma = (char *)malloc(ft_strlen(src) + 1)))
		return (NULL);
	while (src[i])
	{
		locma[i] = src[i];
		i++;
	}
	locma[i] = '\0';
	return (locma);
}
