/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 11:08:26 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/13 11:36:22 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    ft_putstr(char *str)
{
    int temp;

    temp = 0;
    while (str[temp])
        write(1, &str, 1);
    temp++;
}

int     unsigned_num(int nb, int row, int col)
{
    int tableau[row][col];

    while (row < nb)
    {
        while (col < nb)
        {
            if (!tableau[row][col] == NULL)
                return (0);
            col++;
        }
        row++;
    }
}


int     solve_line(int nb, int row, int col)
{
    int tableau[row][col];

    if (!unsigned_num(nb, row, col))
        return (1);
    
}