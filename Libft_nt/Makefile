# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 14:47:25 by lumarque          #+#    #+#              #
#    Updated: 2023/04/16 14:47:26 by lumarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_strlen.c 
		
OBJS = ${SRC:.c=.o}
INCLUDE = libft.h
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.c: %.o
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:c=.o}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS} ${INCLUDE}

all: ${NAME}

clean: 
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

tclean: clean
	${RM} teste 

re: fclean all

teste: fclean
	${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o teste

.PHONY: all clean fclean re

