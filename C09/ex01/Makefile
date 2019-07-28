# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrossig <adrossig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/18 14:45:17 by adrossig          #+#    #+#              #
#    Updated: 2019/07/25 11:38:09 by adrossig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
HEADER = includes/
OBJS = ${SRCS:.c=.o}
NAME = libft.a
CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -I ${HEADER}

all: ${NAME}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}
clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all