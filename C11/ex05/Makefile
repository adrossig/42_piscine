# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/24 20:39:50 by adrossig          #+#    #+#              #
#    Updated: 2019/07/25 11:41:10 by adrossig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=srcs/ft_atoi.c srcs/ft_calcul.c srcs/ft_operation.c srcs/ft_operator.c srcs/ft_putnbr.c srcs/main.c
OBJS=srcs/ft_atoi.o srcs/ft_calcul.o srcs/ft_operation.o srcs/ft_operator.o srcs/ft_putnbr.o srcs/main.o
NAME=do-op
CC=gcc
FLAGS=-Werror -Wall -Wextra
HEADER_FOLDER=includes
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -g $(FLAGS) -I$(HEADER_FOLDER) -o $(NAME) $(SRCS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
	
re: fclean all
