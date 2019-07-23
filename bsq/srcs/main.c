/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:49:54 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:32:46 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_test(int nb_files, char **filenames, t_bool *error)
{
	char	*buffer;
	int		i;

	i = 0;
	while (i < nb_files)
	{
		*error = FALSE;
		buffer = ft_read_file(filenames[i]);
		if (buffer == NULL)
			*error = TRUE;
		else
			ft_bsq(buffer, error);
		if (*error == TRUE)
			ft_putstr("map error\n");
		i++;
	}
}

void	ft_test2(t_bool *error)
{
	char	*buffer;

	buffer = ft_input(0);
	if (buffer == NULL)
	{
		*error = TRUE;
		return ;
	}
	ft_bsq(buffer, error);
	free(buffer);
}

int		main(int argc, char *argv[])
{
	char	**filenames;
	int		nb_files;
	t_bool	error;

	error = FALSE;
	if (argc > 1)
	{
		filenames = argv + 1;
		nb_files = argc - 1;
		ft_test(nb_files, filenames, &error);
	}
	else
	{
		ft_test2(&error);
		if (error == TRUE)
			ft_putstr("map error\n");
	}
	return (0);
}
