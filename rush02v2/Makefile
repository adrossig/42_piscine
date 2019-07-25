# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/20 09:01:54 by adrossig          #+#    #+#              #
#    Updated: 2019/07/21 22:35:19 by adrossig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Werror -Wall -Wextra
HEADER_FOLDER=includes
NAME=a.out
SRC=srcs/*.c
OBJECTS= *.o

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -I$(HEADER_FOLDER) -c $(SRC)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all
