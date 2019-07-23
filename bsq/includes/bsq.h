/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:07:46 by adrossig          #+#    #+#             */
/*   Updated: 2019/07/23 23:21:40 by adrossig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define TRUE 1
# define FALSE 0

typedef int		t_bool;

typedef struct	s_grid
{
	int		rows;
	int		cols;
	char	cell_availabe;
	char	empty_cell;
	char	obstacle_cell;
	char	**lines;
}				t_grid;

typedef struct	s_square
{
	int		x;
	int		y;
	int		size;
}				t_square;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strndup(char *src, unsigned int	n);
char			*ft_input(int fd);
char			*ft_read_file(char *filename);
void			ft_bsq(char *buffer, t_bool *error);
void			ft_find_bigger_square(t_grid *grid);
void			ft_remove_grid(t_grid	*grid);
t_bool			ft_get_constants(t_grid *grid, char *buffer);
t_bool			ft_get_number_rows(t_grid *grid, char *buffer, int *index);
t_bool			ft_get_rows(t_grid *grid, char *buffer);
t_bool			ft_check_dimensions(t_grid *grid);
t_bool			ft_parse_grid(char *buffer, t_grid *grid);
t_square		*ft_create_square(int x, int y, int size);
t_square		*ft_square_cmp(t_square *square_1, t_square *square_2);
t_square		*ft_update_square(t_square *square, int size);

#endif
