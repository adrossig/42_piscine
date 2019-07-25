# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/20 09:01:54 by adrossig          #+#    #+#              #
#    Updated: 2019/07/20 16:07:29 by adrossig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Werror -Wall -Wextra
HEADER_FOLDER=includes
NAME=rush-02
SRC=*.c
OBJECTS= *.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -I$(HEADER_FOLDER) -c $(SRC)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
	
re: fclean all