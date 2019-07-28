/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:32:47 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 22:39:06 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	**ft_strdup_new(char *str, int i, char **tab, char *cs)
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
	if ((tab[i] = (char *)malloc((word_len + 1) * sizeof(char))) == NULL)
		return (NULL);
	j = 0;
	while (!(is_charset(str[j], cs)) && str[j])
	{
		tab[i][j] = str[j];
		j++;
	}
	tab[i][j] = 0;
	return (tab);
}
