/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 09:22:37 by judecuyp          #+#    #+#             */
/*   Updated: 2019/07/14 15:00:49 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		*ft_split(char *str)
{
	int *border;
	int i;
	int j;

	i = 0;
	j = 0;
	border = malloc(16 * (sizeof(int)));
	while (str[i])
	{
		if ((i % 2 == 0) && str[i] >= 49 && str[i] <= 52)
		{
			border[j] = str[i] - '0';
			j++;
		}
		i++;
	}
	return (border);
}

int		ft_check_args(char *str)
{
	int i;
	int cmpt_spaces;
	int cmpt_number;

	cmpt_spaces = 0;
	cmpt_number = 0;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
		i++;
	if (i != 31)
		return (0);
	i = 0;
	while (str[i])
	{
		if (!(i % 2) && (str[i] >= 49) && (str[i] <= 52))
			cmpt_number++;
		if ((i % 2) && str[i] == ' ')
			cmpt_spaces++;
		i++;
	}
	if (cmpt_number == 16 && cmpt_spaces == 15)
		return (1);
	return (0);
}
