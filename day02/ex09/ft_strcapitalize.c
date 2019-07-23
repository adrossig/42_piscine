/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 14:12:32 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/05 14:48:22 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	str = ft_strlowercase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i - 1] >= 9 && str[i - 1] <= '/') ||
			(str[i - 1] >= ':' && str[i - 1] <= '@') ||
			(str[i - 1] >= '[' && str[i - 1] <= '`') ||
			(str[i - 1] >= '{'))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
