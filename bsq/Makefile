# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/20 22:31:15 by adrossig          #+#    #+#              #
#    Updated: 2019/07/23 21:01:49 by adrossig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS= -Werror -Wall -Wextra
HEADER_FOLDER=includes
NAME=bsq
SRCS=./srcs/main.c \
		./srcs/grid/ft_remove_grid.c \
    	./srcs/grid/ft_get_constants.c \
    	./srcs/grid/ft_get_num_rows.c \
    	./srcs/grid/ft_get_rows.c \
    	./srcs/grid/ft_check_dimension.c \
    	./srcs/grid/ft_parse_grid.c \
        ./srcs/libs/ft_bsq.c \
        ./srcs/libs/ft_square.c \
        ./srcs/libs/ft_square2.c \
        ./srcs/libs/ft_read.c \
        ./srcs/libs/ft_input.c \
    	./srcs/libs/ft_strcpy.c \
    	./srcs/libs/ft_putstr.c \
    	./srcs/libs/ft_atoi.c \
    	./srcs/libs/ft_strlen.c \
    	./srcs/libs/ft_strndup.c
	
OBJECTS=./srcs/main.o \
		./srcs/grid/ft_remove_grid.o \
    	./srcs/grid/ft_get_constants.o \
    	./srcs/grid/ft_get_num_rows.o \
    	./srcs/grid/ft_get_rows.o \
    	./srcs/grid/ft_check_dimension.o \
    	./srcs/grid/ft_parse_grid.o \
        ./srcs/libs/ft_bsq.o \
        ./srcs/libs/ft_square.o \
        ./srcs/libs/ft_square2.o \
        ./srcs/libs/ft_read.o \
        ./srcs/libs/ft_input.o \
    	./srcs/libs/ft_strcpy.o \
    	./srcs/libs/ft_putstr.o \
    	./srcs/libs/ft_atoi.o \
    	./srcs/libs/ft_strlen.o \
    	./srcs/libs/ft_strndup.o

all: $(NAME)

$(NAME):
	$(CC) -g $(FLAGS) -I$(HEADER_FOLDER) -o $(NAME) $(SRCS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
	
re: fclean all