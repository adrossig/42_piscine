/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:21:17 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 22:39:06 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		size_nbr(char *n)
{
	int		i;
	int		c;

	i = 0;
	c = ft_strlen(n) % 3;
	if (c)
		i = 1;
	while (n[c])
	{
		i++;
		c += 3;
	}
	i--;
	return (-i);
}

void	read_nbr(char **tab, int nb, int a, int b)
{
	char	*line;
	int		i;
	int		j;
	char	*res;

	a = b;
	j = 0;
	if (!(res = (char *)malloc(sizeof(char) * 500)))
		return ;
	line = find_line(tab, nb);
	i = 0;
	while (line[i] && line[i] != ':')
		i++;
	i++;
	while (line[i] && (line[i] == ' ' || line[i] == '\t'))
		i++;
	while (line[i])
	{
		res[j++] = line[i++];
	}
	ft_putstr(line + i);
	ft_putstr(" ");
}

char	*copy_nb(char *nb, int shift)
{
	char	*res;

	if (!(res = malloc(sizeof(char) * 3)))
		return (NULL);
	if (shift == 1)
	{
		res[0] = nb[0];
		res[1] = '\0';
		res[2] = '\0';
	}
	else if (shift == 2)
	{
		res[0] = nb[0];
		res[1] = nb[1];
		res[2] = '\0';
	}
	else
	{
		res[0] = nb[0];
		res[1] = nb[1];
		res[2] = nb[2];
	}
	return (res);
}