/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:26:32 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 10:55:23 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

int		ft_open_files(char *langage)
{
	int fd;

	//if (ft_strcmp(langage, "fr"))
	//	fd = open("files/fr.text", O_RDONLY);
	//else
		fd = open(langage, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("ERROR\n");
		close(fd);
	}
	return (fd);
}
