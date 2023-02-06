# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 17:01:49 by ldevy             #+#    #+#              #
#    Updated: 2023/02/06 18:26:19 by ldevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Fixed.cpp main.cpp

NAME 	= fixed

RM		= rm -rf

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -I includes

all:		${NAME}

${NAME}: ${SRC}	
	${CC} ${CFLAGS} ${SRC} -o ${NAME} 

clean:
	${RM} ${NAME}

fclean:		
	${RM} ${NAME}

re:		clean fclean all

.PHONY: all clean fclean re 