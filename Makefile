# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xadabunu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 16:57:52 by xadabunu          #+#    #+#              #
#    Updated: 2023/01/10 16:57:55 by xadabunu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	main.c \
			ps_utils.c \
			push_swap.c

OBJS	=	${SRCS:.c.o}

NAME	=	push_swap.a

CC		=	gcc

RM		=	rm -f

FLAGS	=	-Wall -Wextra -Werror

.c.o	:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}	:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all		:	${NAME}

clean	:
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${NAME}

re		:	fclean all

.PHONY	:	all fclean clean re bonus
