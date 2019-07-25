/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 09:32:59 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/06 15:06:11 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int i, int x)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	mid_line(int i, int x)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			i = 1;
			if (j == 1)
				first_line(i, x);
			else if (j == y)
				first_line(i, x);
			else
				mid_line(i, x);
			j++;
			ft_putchar('\n');
		}
	}
}
