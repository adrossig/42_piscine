/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:16:27 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 22:39:06 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strlen(char *src)
{
	int temp;

	temp = 0;
	while (src[temp] != '\0')
		temp++;
	return (temp);
}

int		ft_parse(char *s1)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] < 48 || s1[i] > 57)
			return (0);
		i++;
	}
	if (ft_strlen(s1) > 39)
		return (0);
	return (1);
}

int		parse(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
		i++;
	}
	if (ft_strlen(s) > 39)
		return (0);
	return (1);
}