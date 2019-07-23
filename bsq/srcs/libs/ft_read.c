/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:34:11 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:32:27 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_read_file(char *filename)
{
	int		fd;
	char	*buffer;

	fd = open(filename, 'r');
	if (fd < 0)
		return (NULL);
	buffer = ft_input(fd);
	if (buffer == NULL)
	{
		close(fd);
		return (NULL);
	}
	close(fd);
	return (buffer);
}
