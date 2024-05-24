# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkurkar <mkurkar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/22 19:49:28 by mkurkar           #+#    #+#              #
#    Updated: 2024/05/22 19:55:17 by mkurkar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC  = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJS = ${SRC:.c=.o}

HEAD = ./includes/

NAME = libft.a

EXTRACT = ar rcs

LIB  = ranlib

COMPILER  = cc

CFLAGS      = -Wall -Wextra -Werror

all:        ${NAME}

.c.o:
            ${COMPILER} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
            ${EXTRACT} ${NAME} ${OBJS}
            ${LIB} ${NAME}

clean:      
            rm -f ${OBJS}

fclean:     clean
            rm -f ${NAME}

re:         fclean all

.PHONY:     all clean fclean re