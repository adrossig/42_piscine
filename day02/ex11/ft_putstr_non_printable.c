/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 15:45:34 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/04 08:52:44 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int tmp;
	int temp;
	int i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] < 32 || str[i] == 127) && str[i] >= 0)
		{
			tmp = (str[i] / 16) % 16;
			temp = str[i] % 16;
			if (tmp > 9)
				tmp = tmp % 10 + 'a' - 48;
			if (temp > 9)
				temp = temp % 10 + 'a' - 48;
			ft_putchar(92);
			ft_putchar(tmp + 48);
			ft_putchar(temp + 48);
		}
		else
			ft_putchar(str[i]);
	}
}
