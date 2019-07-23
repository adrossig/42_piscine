/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:25:01 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:39:32 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strndup(char *src, unsigned int n)
{
	unsigned int		i;
	char				*copy;

	copy = (char*)malloc(sizeof(char) * (n + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < n && src[i])
	{
		copy[i] = src[i];
		i++;
	}
	while (i < n)
		copy[i++] = '\0';
	return (copy);
}
