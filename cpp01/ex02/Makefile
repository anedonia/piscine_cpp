# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 20:17:34 by ldevy             #+#    #+#              #
#    Updated: 2023/01/19 20:18:04 by ldevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= brain

RM		= rm -rf

CC		= c++

SRCS	=  main.cpp

OBJS	= $(SRCS:%.cpp=%.o)

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -I includes

all:		${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME} 

.cpp.o:
	${CC} ${CFLAGS} -c $< -o $(<:.cpp=.o)

clean: 
	${RM} ${OBJS}
fclean: clean		
	${RM} ${NAME}

re:		fclean all

.PHONY: all fclean clean re 