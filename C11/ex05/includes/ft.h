/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:42:05 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/25 10:57:55 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_calcul(char *number1, char *operator, char *number2);
int		ft_operator(char *operator);
int		ft_add(int i, int j);
int		ft_division(int i, int j);
int		ft_atoi(char *str);
int		ft_minus(int i, int j);
int		ft_multiplication(int i, int j);
int		ft_modulo(int i, int j);
int		ft_str_is_alpha(char *str);
#endif
