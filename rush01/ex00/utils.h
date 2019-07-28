/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:01:07 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/14 15:13:49 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>

int		ft_check_top(int tab[4][4], int *border);
int		ft_check_bottom(int tab[4][4], int *border);
int		ft_check_left(int tab[4][4], int *border);
int		ft_check_right(int tab[4][4], int *border);
int		*ft_split(char *str);
int		ft_check(int tab[4][4], int i, int j);
int		ft_check_args(char *str);
void	ft_putchar(char c);
void	ft_print(int tab[4][4]);
void	ft_back(int tab[4][4], int row, int col, int *border);

#endif
