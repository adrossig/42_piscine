/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 15:12:28 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/06 15:56:28 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int tmp;

	tmp = 0;
	while (str[tmp] != '\0')
	{
		tmp++;
	}
	return (tmp);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int tmp;

	tmp = 0;
	if (!dest || !src)
		return (0);
	while (src[tmp] && tmp < size - 1)
	{
		dest[tmp] = src[tmp];
		tmp++;
	}
	dest[tmp] = '\0';
	return (ft_strlen(src));
}
