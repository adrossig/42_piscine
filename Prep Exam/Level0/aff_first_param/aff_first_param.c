/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:44:42 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/25 14:51:01 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int tmp;

	tmp = 0;
	while (str[tmp])
		write(1, &str[tmp++], 1);
	write(1, "\n", 1);
}

int		main(int ac, char **av)
{
	if (ac >= 0)
		ft_putstr(av[1]);
	return 0;	
}