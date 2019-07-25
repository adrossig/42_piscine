/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leng.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:58:38 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 14:29:16 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int		ft_strlen(char *src)
{
	int temp;

	temp = 0;
	while (src[temp] != '\0')
		temp++;
	return (temp);
}

/*
int		ft_files_len(int fd)
{
	char	buffer[32000];
	int		size;

	size = 0;
	while (!(read(fd, buffer, 1) > 32000))
		size = (size + buffer + 1);
	return (size);
}
*/