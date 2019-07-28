/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:10:12 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/09 16:44:15 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_sign(int k, int nb)
{
	if (k % 2 == 1)
		return (-nb);
	return (nb);
}

int		stock_nbr(int i, char *str)
{
	int nb;
	int j;

	nb = 0;
	j = 1;
	while (str[i] > 47 && str[i] < 58)
		i++;
	while (str[i - 1] > 47 && str[i - 1] < 58)
	{
		nb = nb + (str[i - 1] - 48) * j;
		j = j * 10;
		i--;
	}
	return (nb);
}

int		ft_atoi(char *str)
{
	int i;
	int k;
	int nb;

	i = 0;
	k = 0;
	nb = 0;
	while ((str[i] < 14 && str[i] > 8) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			k++;
		i++;
	}
	nb = stock_nbr(i, str);
	nb = check_sign(k, nb);
	return (nb);
}
