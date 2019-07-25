/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:26:17 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/06 14:32:48 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int i, int x)
{
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	mid_line(int i, int x)
{
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void	last_line(int i, int x)
{
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('C');
		else if (i == x)
			ft_putchar('A');
		else
			ft_putchar('B');
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
				last_line(i, x);
			else
				mid_line(i, x);
			j++;
			ft_putchar('\n');
		}
	}
}
