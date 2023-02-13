# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 17:34:16 by ldevy             #+#    #+#              #
#    Updated: 2023/02/13 17:14:40 by ldevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= fragtrap

RM		= rm -rf

CC		= c++

SRCS	=  main.cpp ClapTrap.cpp FragTrap.cpp 

INC		= ClapTrap.hpp FragTrap.hpp

OBJS	= $(SRCS:%.cpp=%.o)

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -I includes -g3

all:		${NAME}

${NAME}: ${OBJS} ${INC}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME} 

.cpp.o:
	${CC} ${CFLAGS} -c $< -o $(<:.cpp=.o)

clean: 
	${RM} ${OBJS}
fclean: clean		
	${RM} ${NAME}

re:	fclean 
	all

.PHONY: all fclean clean re 	