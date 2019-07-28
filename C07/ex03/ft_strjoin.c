/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 22:30:17 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/22 12:25:22 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int		a;
	int		b;

	b = 0;
	a = 0;
	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		i;
	char	*locma;

	locma = NULL;
	i = 0;
	a = 0;
	if (size == 0)
		return (0);
	while (i++ < size)
		a += ft_strlen(strs[i]);
	a += (ft_strlen(sep) * (size - 2));
	if (!(locma = (char *)malloc(sizeof(int) * (a + 1))))
		return (0);
	i = 0;
	while (i < size)
	{
		strs++;
		i++;
		locma = ft_strcat(locma, *strs);
		if (i < size)
			locma = ft_strcat(locma, sep);
	}
	return (locma);
}

int    main(int argc, char **argv)
{
    char *str;
    char sep[]="SEP";
	(void)argc;
    str = ft_strjoin(3, argv, sep);
    printf("%s", str);
    return (0);
}