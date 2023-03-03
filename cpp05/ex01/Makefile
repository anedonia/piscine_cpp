# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 17:34:16 by ldevy             #+#    #+#              #
#    Updated: 2023/02/23 15:47:32 by ldevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= bureaucrate

RM		= rm -rf

CXX		= c++

SRCS	= main.cpp $(addprefix srcs/, Bureaucrate.cpp Form.cpp) #WrongAnimal.cpp WrongCat.cpp

INC		= $(addprefix includes/, includes.hpp Bureaucrate.hpp Form.hpp) #WrongAnimal.hpp WrongCat.hpp

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
	./bureaucrate

vtest: ${NAME}
	valgrind ./bureaucrate

.PHONY: all fclean clean re 
