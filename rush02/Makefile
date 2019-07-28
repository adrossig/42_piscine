# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/20 09:01:54 by adrossig          #+#    #+#              #
#    Updated: 2019/07/21 22:37:39 by adrossig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Werror -Wall -Wextra
HEADER_FOLDER=*.h
NAME=a.out
SRC=*.c
OBJECTS= *.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -I$(HEADER_FOLDER) -c $(SRC)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all
