/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 22:37:19 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:29:31 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_input(int fd)
{
	char	*buffer;
	char	*tmp_buffer;
	char	c;
	int		i;

	tmp_buffer = NULL;
	while (read(fd, &c, 1) > 0)
	{
		i = tmp_buffer ? ft_strlen(tmp_buffer) : 0;
		if ((buffer = (char*)malloc(sizeof(char) * (i + 2))) == NULL)
		{
			if (tmp_buffer)
				free(tmp_buffer);
			return (NULL);
		}
		if (tmp_buffer)
		{
			ft_strcpy(buffer, tmp_buffer);
			free(tmp_buffer);
		}
		buffer[i] = c;
		buffer[i + 1] = '\0';
		tmp_buffer = buffer;
	}
	return (tmp_buffer ? buffer : NULL);
}
