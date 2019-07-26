/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 08:30:46 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/26 08:48:56 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    ft_rot13(char str)
{
    if ((str >= 'a' && str <= 'm') || (str >= 'A' && str <= 'M'))
        str += 13;
    else if ((str >= 'n' && str <= 'z') || (str >= 'N' && str <= 'Z'))
        str -= 13;
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