/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 09:11:49 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 17:05:39 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft.h"

/*void	ft_parse_dic(char *av)
{
	int k;
	int j;
	int *tableauInt;
	char buffer[BUFFER_SIZE];
	int indice;
	
	k = 0;
	tableauInt = ft_split(av);
	if (indice == 0 && ft_strcmp(av, "0") != 0)
	{
		ft_putstr("Error\n");
		return (NULL);
	}
	while (k < ft_strlen(av))
	{
		indice = ft_strstr(tableauInt, (tableauInt[k] * (ft_strlen(av) - k)) + '0');
		while (buffer[indice] != ':')
			indice++;
		indice++;
		while (buffer[indice] != '\n')
		{
			buffer[j++] = buffer[indice];
			indice++;
		}
		ft_putstr(buffer);
		k++;
		k = 0;
	}
}*/

void	ft_print_num(str)
{
	int a;
	int indice;
	char *tableau;
	
	while (a < indice && str)
	{
		while (a != 0)
		{
			
			indice++;
		}
	}
}

int		main(int ac, char **av)
{
	int fd;
	
	if (ac != 3)
		ft_putstr("Error\n");
	else
	{
		fd = ft_open_files(av[1]);
		ft_read_files(fd);
		ft_parsing_dic(av[1]);
		ft_putchar('\n');		
	}
	return (0);
}
