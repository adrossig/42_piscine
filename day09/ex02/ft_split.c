/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:43:00 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/24 21:18:03 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char str, char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_count_words(char *str, char *cs)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	if (!(*str))
		return (0);
	if (!(is_charset(str[0], cs)))
		words = 1;
	while (str[i])
	{
		if (is_charset(str[i], cs))
		{
			if (!(is_charset(str[i + 1], cs)) && str[i + 1])
			{
				words++;
				i++;
			}
		}
		i++;
	}
	return (words);
}

char	**ft_strdup(char *str, int i, char **locma, char *cs)
{
	int		j;
	int		word_len;

	word_len = 0;
	j = 0;
	while (!(is_charset(str[j], cs)) && str[j])
	{
		word_len++;
		j++;
	}
	if (!(locma[i] = (char *)malloc((word_len + 1) * sizeof(char))))
		return (NULL);
	j = 0;
	while (!(is_charset(str[j], cs)) && str[j])
	{
		locma[i][j] = str[j];
		j++;
	}
	locma[i][j] = 0;
	return (locma);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**locma;

	i = 0;
	j = ft_count_words(str, charset);
	if (!(locma = malloc((j + 1) * sizeof(char *))))
		return (NULL);
	while (i < j)
	{
		while (is_charset(*str, charset))
			str++;
		ft_strdup(str, i, locma, charset);
		while (!(is_charset(*str, charset)) && *str)
			str++;
		i++;
	}
	locma[i] = 0;
	return (locma);
}

