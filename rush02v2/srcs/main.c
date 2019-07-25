/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:51:35 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 22:39:06 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	put_nbr_letters(char **dict, char *s)
{
	if (ft_strlen(s) % 3 == 0)
		put_nbr_letters_even(dict, s);
	else
		put_nbr_letters_odd(dict, s);
}

void	put_nbr_letters_even(char **dict, char *s)
{
	int		i;
	char	*nb;
	char	size;

	i = 0;
	size = size_nbr(s);
	while (s[i])
	{
		nb = copy_nb(s + i, 0);
		if (nb[0] == '0' && nb[1] == '0' && nb[2] == '0' &&
			ft_strlen(s + i) == 0)
			return ;
		if (nb[0] != '0' || nb[1] != '0' || nb[2] != '0')
			print_hundreds(dict, nb, i, ft_strlen(s));
		if (size)
		{
			if (nb[0] != '0' || nb[1] != '0' || nb[2] != '0')
				read_nbr(dict, size, i, ft_strlen(s));
			size++;
		}
		i += 3;
	}
}

void	put_nbr_letters_odd(char **dict, char *s)
{
	int		i;
	int		shift;
	char	*nb;
	char	size;

	i = 0;
	size = size_nbr(s);
	shift = ft_strlen(s) % 3;
	while (s[i])
	{
		nb = copy_nb(s + i, shift);
		shift = 0;
		if (nb[0] == '0' && nb[1] == '0' && nb[2] == '0' &&
			ft_strlen(s + i) == 0)
			return ;
		if (nb[0] != '0' || nb[1] != '0' || nb[2] != '0')
			print_hundreds(dict, nb, i, ft_strlen(s));
		if (size)
		{
			if (nb[0] != '0' || nb[1] != '0' || nb[2] != '0')
				read_nbr(dict, size, i, ft_strlen(s));
			size++;
		}
		(i == 0) ? (i += ft_strlen(s) % 3) : (i += 3);
	}
}

void	print_hundreds(char **dict, char *nbr, int a, int b)
{
	int		nb;

	nb = ft_atoi(nbr);
	if (nb >= 100)
	{
		read_nbr(dict, (nb / 100), a, b);
		read_nbr(dict, 100, a, b);
		nb %= 100;
		if (nb == 0)
			return ;
	}
	if (nb <= 20)
	{
		read_nbr(dict, nb, a, b);
		return ;
	}
	read_nbr(dict, ((nb / 10) * 10), a, b);
	nb %= 10;
	if (nb)
		read_nbr(dict, (nb % 10), a, b);
}

int		main(int ac, char **av)
{
	int		fd;
	char	**dict;
	int		i;
	int		j;

	j = 0;
	if ((ac < 2) || (fd = open("numbers.dict", O_RDONLY)) == -1 ||
		!(parse(av[1])))
	{
		write(1, "error\n", 6);
		return (0);
	}
	i = 0;
	while (av[1][i] == '0')
		i++;
	dict = ft_split(read_file(fd), "\n");
	while (dict[j])
	{
		dict[j] = ft_sup_spaces(dict[j]);
		j++;
	}
	(is_z(av[1])) ? read_nbr(dict, 0, 0, 0) : put_nbr_letters(dict, av[1] + i);
	write(1, "\n", 1);
	close(fd);
	return (0);
}