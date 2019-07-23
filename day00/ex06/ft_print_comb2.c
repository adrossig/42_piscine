/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 13:46:40 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/03 09:06:28 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int nbr1;
	int nbr2;

	nbr1 = 0;
	while (nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			ft_putchar(nbr1 / 10 + 48);
			ft_putchar(nbr1 % 10 + 48);
			ft_putchar(' ');
			ft_putchar(nbr2 / 10 + 48);
			ft_putchar(nbr2 % 10 + 48);
			if (nbr1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nbr2++;
		}
		nbr1++;
	}
}

int 	main(void)
{
	ft_print_comb2();
	return 0;
}