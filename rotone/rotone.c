/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 08:50:03 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/26 08:52:16 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    ft_rot13(char str)
{
    if ((str >= 'a' && str <= 'y') || (str >= 'A' && str <= 'Y'))
        str += 1;
    else if ((str == 'z' || str == 'Z'))
        str -= 25;
    return (str);
}

int main(int ac, char **av)
{
    if (ac == 2)
        while (*av[1])
            ft_putchar(ft_rot13(*av[1]++));
    ft_putchar('\n');
    return 0;
}