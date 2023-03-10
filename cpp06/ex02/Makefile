# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 17:34:16 by ldevy             #+#    #+#              #
#    Updated: 2023/03/10 20:02:56 by ldevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= base

RM		= rm -rf

CXX		= clang++

SRCS	= main.cpp Base.cpp

INC		=  Base.hpp A.hpp B.hpp C.hpp

OBJS	= $(SRCS:%.cpp=%.o)

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I includes -g3

all:		${NAME}

${NAME}: ${OBJS} ${INC}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME} 

clean: 
	${RM} ${OBJS}

fclean: clean		
	${RM} ${NAME}

re:		fclean all

test: ${NAME}
	./base
	
vtest: ${NAME}
	valgrind ./base

.PHONY: all fclean clean re 
