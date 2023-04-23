# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumarque <lumarque@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 14:47:25 by lumarque          #+#    #+#              #
#    Updated: 2023/04/23 15:53:06 by lumarque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_atoi.c ft_strlen.c ft_bzero.c ft_memset.c ft_calloc.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_memcpy.c \
		ft_memmove.c ft_putendl_fd.c ft_strchr.c ft_putnbr_fd.c \
		ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c \
		ft_strmapi.c ft_striteri.c ft_itoa.c 
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

