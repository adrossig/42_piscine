/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 08:39:19 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/09 15:14:28 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_bases(int i, char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		while (j <= i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = j + 1;
	}
	return (i);
}

int		ft_strlen_base(char *str)
{
	int tmp;
	int temp;

	tmp = 0;
	while (str[tmp] && ((str[tmp] >= 48 && str[tmp] <= 57) ||
	(str[tmp] >= 65 && str[tmp] <= 90) ||
	(str[tmp] >= 97 && str[tmp] <= 122)))
		tmp++;
	temp = ft_check_bases(tmp, str);
	if (temp > 1)
		return (temp);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;

	i = ft_strlen_base(base);
	if (i > 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr *= -1;
		}
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			nbr = 147483648;
		}
		if (nbr >= i)
		{
			ft_putnbr_base(nbr / i, base);
			ft_putchar(base[nbr % i]);
		}
		if (nbr < i)
			ft_putchar(base[nbr]);
	}
}
