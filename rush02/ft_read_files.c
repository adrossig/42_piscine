/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:31:42 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 10:08:51 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"
/*
char	*ft_read_files(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*dest;
	int		a;

	a = 0;
	while (read(fd, buffer + a, 1) == 1)
	{
		if (buffer[a] == '\n')
			break ;
		a++;
		printf("%d\n", buffer[a]);
	}
	buffer[a] = '\0';
	dest = ft_strdup(buffer);
	return (dest);
}*/

char	*ft_read_files(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*dest;
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (read(fd, buffer + i, BUFFER_SIZE) != '\0')
	{
		if (buffer[i] == '\0')
			break ;
		if (count >= (32000 - 1))
		{
			ft_putstr("Buffer Overflow\n");
			close(0);
		}
		i = i + 1;
		count = count + 1;
	}
	buffer[i] = '\0';
	dest = ft_strdup(buffer);
	return (dest);
}
