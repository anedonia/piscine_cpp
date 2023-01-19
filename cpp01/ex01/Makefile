# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 18:50:17 by ldevy             #+#    #+#              #
#    Updated: 2023/01/19 20:12:44 by ldevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= horde

RM		= rm -rf

CC		= c++

SRCS	=  $(addprefix srcs/, main.cpp \
			$(addprefix zombies/, zombieHorde.cpp Zombie.cpp))
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