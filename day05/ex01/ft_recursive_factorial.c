/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 08:10:23 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/13 15:20:14 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int nbr;

	nbr = nb;
	if (nbr < 0)
		return (0);
	if (nbr == 0)
		return (1);
	return (nbr * (ft_recursive_factorial(nbr - 1)));
}
