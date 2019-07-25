/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:38:57 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/21 18:11:26 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUFFER_SIZE 32000

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_files_len(int fd);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		ft_open_files(char *langage);
int		ft_something(char *str);
char	*ft_read_files(int fd);
char	*ft_strdup(char *src);
char	*ft_strstr(char *str, char *to_find);

#endif
