/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 20:43:36 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/18 21:34:15 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb == 1)
		return (1);
	while (nb > 2)
	{
		i = 2;
		while (i <= nb / i)
		{
			if (!(nb % i))
			{
				if (i == nb)
					return (nb);
				break ;
			}
			i++;
		}
		nb++;
	}
	return (2);
}
