/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:38:57 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 22:41:35 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# define BUFF_SIZE 50000

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

void	put_nbr_letters(char **dict, char *s);
void	print_hundreds(char **dict, char *nbr, int a, int b);
void	read_nbr(char **tab, int nb, int a, int b);
void	ft_putstr(char *str);
void	put_nbr_letters_odd(char **dict, char *s);
void	put_nbr_letters_even(char **dict, char *s);
int		is_charset(char c, char *cs);
int		is_z(char *str);
int		size_nbr(char *n);
int		parse(char *s);
int		ft_strlen(char *s);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strcpy(char *dest, char *src);
char	*find_more(char **tab, int n);
char	*find_line(char **tab, int nb);
char	*ft_sup_spaces(char *str);
char	**ft_split(char *str, char *charset);
char	*ft_if_forest(char **tab, int nb);
char	*read_file(int fd);
char	*ft_strcat(char *dest, char *src);
char	*copy_nb(char *nb, int shift);

#endif
