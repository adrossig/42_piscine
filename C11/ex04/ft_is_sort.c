/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 09:13:09 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/25 15:23:54 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	if (length < 2)
		return (1);
	while (a < length - 1)
	{
		if (f(tab[a], tab[a + 1]) > 0)
			c -= 1;
		if (f(tab[a], tab[a + 1]) < 0)
			b = 1;
		a++;
	}
	if (c == -1 && b == 1)
		return (0);
	return (1);
}
