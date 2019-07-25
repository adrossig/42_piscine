/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:16:11 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/25 10:38:01 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_calcul(char *number1, char *operator, char *number2)
{
	if (operator[0] == '+')
		return (ft_add(ft_atoi(number1), ft_atoi(number2)));
	else if (operator[0] == '/')
		return (ft_division(ft_atoi(number1), ft_atoi(number2)));
	else if (operator[0] == '-')
		return (ft_minus(ft_atoi(number1), ft_atoi(number2)));
	else if (operator[0] == '*')
		return (ft_multiplication(ft_atoi(number1), ft_atoi(number2)));
	else if (operator[0] == '%')
		return (ft_modulo(ft_atoi(number1), ft_atoi(number2)));
	return (0);
}
