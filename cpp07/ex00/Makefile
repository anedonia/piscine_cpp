# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 17:34:16 by ldevy             #+#    #+#              #
#    Updated: 2023/03/07 13:24:50 by ldevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= template 

RM		= rm -rf

CXX		= c++

SRCS	= main.cpp

INC		=  whatever.hpp

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
	./scalar 0
	@echo '----------------------------------'
	./scalar 42.42f
	@echo '----------------------------------'
	./scalar 42.42
	@echo '----------------------------------'
	./scalar fjdjfmdslf
	@echo '----------------------------------'
	./scalar a
	@echo '----------------------------------'
	./scalar nan
	@echo '----------------------------------'
	./scalar inf
	@echo '----------------------------------'
	./scalar -inf
	
	
vtest: ${NAME}
	valgrind ./scalar nan;
	valgrind ./scalar inf;
	valgrind ./scalar -inf;
	valgrind ./scalar 0;
	valgrind ./scalar 42.42f;
	valgrind ./scalar 42.42;
	valgrind ./scalar fjdjfmdslf;
	valgrind ./scalar a;
	

.PHONY: all fclean clean re 
