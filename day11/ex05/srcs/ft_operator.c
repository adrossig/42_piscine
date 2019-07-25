/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 19:21:30 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/25 09:48:13 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_operator(char *operator)
{
	if (operator[0] && (operator[0] == '+' || operator[0] == '/'
	|| operator[0] == '-' || operator[0] == '*' || operator[0] == '%'))
		return (1);
	else
		return (0);
}
