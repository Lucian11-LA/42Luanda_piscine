# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paustin <paustin@student.21-school>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/03 11:46:37 by paustin           #+#    #+#              #
#    Updated: 2020/10/05 21:09:54 by paustin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = main.c ft_aux.c ft_dic.c ft_io.c ft_say_mem.c ft_say.c ft_say2.c \
ft_say_tri.c ft_say_tri2.c ternary_solver.c

OBJ = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wall -Wextra -Werror

${NAME}:
	${CC} ${CFLAGS} -c ${SRC}
	${CC} ${OBJ} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean:	clean
		rm -f ${NAME}

re: fclean all
