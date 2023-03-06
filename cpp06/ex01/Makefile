# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 17:34:16 by ldevy             #+#    #+#              #
#    Updated: 2023/03/06 22:12:51 by ldevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= serialize

RM		= rm -rf

CXX		= c++

SRCS	= main.cpp Data.cpp Serialize.cpp

INC		=  Data.hpp Serialize.hpp

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
	./serialize
	
vtest: ${NAME}
	valgrind ./serialize

.PHONY: all fclean clean re 
