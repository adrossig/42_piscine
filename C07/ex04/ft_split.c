/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:34:42 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/22 21:41:48 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_charset(char c, char *cs)
{
	int		i;

	i = 0;
	while (cs[i])
	{
		if (c == cs[i])
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

char	**ft_strdup(char *str, int i, char **tab, char *cs)
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

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = ft_count_words(str, charset);
	if ((tab = malloc((j + 1) * sizeof(char *))) == NULL)
		return (NULL);
	while (i < j)
	{
		while (is_charset(*str, charset))
			str++;
		ft_strdup(str, i, tab, charset);
		while (!(is_charset(*str, charset)) && *str)
			str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

int main(void)
{
    int i;


    i = 0;
    char **tab;
    char *str="abcdefghi jwh fehCwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgadubyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejuyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDAGHSVF abcdefghi jwh fehCwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgadubyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejuyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDAGHSVF abcdefghi jwh fehCwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgadubyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejuyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDAGHSVF abcdefghi jwh fehCwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgadubyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDew hjbf ejwbdjkbj b ewjbfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDwid bfueh f cueiu fbdags dygwudg iygwfiy gwudawy dg yiwgaduyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejuyc vawy bdsuqw ydguasbcy audf bwbdcuygASiyd iyqwdysabhc bah fiyas bhucbayw fhdhxas fhvwq bhasvhcbay sgv fybwahbsc hsvfubDHKBSAUCV HASBHDabvgh cvbahsv dgAD Vwbvgcasvhf vhGAdew fkewf kjnew bfljewbfjkb lhjebfjwbcjbew hjbf ejwbdjkbj b ewjfjk newknc jkebwjk,fn snkbcjkhefn cewbmsn,,,,,,,cn jewmbf mascnvbmew ,jbcs,nc bewbf hjba,sdv hjsbasbf ejwhvwbnv nbvsjbjhbfe dsmbv hjebwfj bewjbjcewbc eww  VDAGHSVF ";
    char charset[]="f jbjrhbfj jhj";
    tab = ft_split(str, charset);
    while (tab[i] != 0)
    {
        printf("%s\n", tab[i]);
        i++;
    }
    return (0);
}
