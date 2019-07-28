/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 08:53:21 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/26 08:57:07 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i = 0;
    if (ac != 2)
        ft_putchar('\n');
        return 0;
    while (av[1][i])
    {
        while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
            i++;
        while ((av[1][i] != ' ' || av[1][i] != '\t') && av[1][i])
        {
            ft_putchar(av[1][i]);
            i++;
        }
        if (av[1][i] != ' ' || av[1][i] != '\t')
            break ;
    }
    ft_putchar('\n');
    return 0;
}