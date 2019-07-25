/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:25:30 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/25 10:34:58 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '/' && av[3][0] == '0')
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
		if (av[2][0] == '%' && av[3][0] == '0')
		{
			write(1, "Stop : modulo by zero\n", 21);
			return (0);
		}
		else
			ft_putnbr(ft_calcul(av[1], av[2], av[3]));
		write(1, "\n", 1);
	}
	return (0);
}
