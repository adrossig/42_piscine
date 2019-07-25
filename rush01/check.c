/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:03:07 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/13 15:58:44 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     check_col(char **tab, int col, int row, int col_num)
{
    int i;
    int nbr;
    int prev;
    
    i = col_num;
    nbr = 0;
    prev = tab[row][col];
    while (i < 5)
    {
        if (tab[i][col] > prev)
        {
            prev = tab[i][col];
            nbr++;
        }
        i++;
    }
}

int     check_row(char **tab, int row, int row_num, int col)
{
    int i;
    int nbr;
    int prev;
    
    i = row_num;
    nbr = 0;
    prev = tab[col][row];
    while (i < 5)
    {
        if (tab[i][row] > prev)
        {
            prev = tab[i][row];
            nbr++;
        }
        i++;
    }
}

int     check_colone(char **tab, int col)
{
    if (tab[0][col] == tab[1][col] || tab[0][col] == tab[2][col] ||
        tab[0][col] == tab[3][col] || tab[1][col] == tab[2][col] ||
        tab[1][col] == tab[3][col] || tab[2][col] == tab[3][col])
        return (0);
    if (check_col(tab, col, 1, 2) || check_col(tab, col, 4, 3))
        return (1);
    return (0);
    
}

int     check_line(char **tab, int row)
{
    if (tab[row][0] == tab[row][1] || tab[row][0] == tab[row][2] ||
        tab[row][0] == tab[row][3] || tab[row][1] == tab[row][2] ||
        tab[row][1] == tab[row][3] || tab[row][2] == tab[row][3])
        return (0);
    if (check_row(tab, row, 1, 2) || check_row(tab, row, 4, 3))
        return (1);
    return (0);
}