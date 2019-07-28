/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:03:12 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/11 12:22:48 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int tmp;

	tmp = 0;
	while (str[tmp])
	{
		ft_putchar(str[tmp]);
		tmp++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc >= 0)
		ft_putstr(argv[0]);
	return (0);
}
