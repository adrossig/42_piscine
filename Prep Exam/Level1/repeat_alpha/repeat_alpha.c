/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 15:50:18 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/25 16:36:12 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		lettre_count(char str)
{
	int repeat;

	if (str >= 'A' && str <= 'Z')
		repeat = str - 'A' + 1;
	else if (str >= 'z' && str <= 'z')
		repeat = str - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int		main(int ac, char **av)
{
	int repeat;
	int i = 0;
	if (ac != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	while (av[1][i])
	{
		repeat = lettre_count(av[1][i]);
		while (repeat > 0)
		{
			write(1, &av[1][i], 1);
			repeat--;
		}
		i++;
	}
	write(1, "\n", 1);
}