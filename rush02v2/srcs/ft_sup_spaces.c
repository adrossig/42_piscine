/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sup_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:33:59 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 22:39:06 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_sup_spaces(char *str)
{
	int		i;
	int		j;
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(char) * 500)))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == 32 && str[i + 1] == 32)
			i++;
		dest[j++] = str[i++];
	}
	dest[j] = '\0';
	return (dest);
}