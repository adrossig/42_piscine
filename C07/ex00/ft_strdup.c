/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 09:47:26 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/15 09:25:08 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int temp;

	temp = 0;
	while (src[temp])
		temp++;
	return (temp);
}

char	*ft_strdup(char *src)
{
	char	*locma;
	int		i;

	i = 0;
	locma = (char *)malloc(ft_strlen(src) + 1);
	if (locma == NULL)
		return (NULL);
	while (src[i])
	{
		locma[i] = src[i];
		i++;
	}
	locma[i] = '\0';
	return (locma);
}
