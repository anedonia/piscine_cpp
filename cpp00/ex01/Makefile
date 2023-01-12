# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 18:45:47 by ldevy             #+#    #+#              #
#    Updated: 2023/01/11 12:51:56 by ldevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

NAME 	= megaphone

RM		= rm -rf

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -I includes

all:		${NAME}

${NAME}:	
	${CC} ${CFLAGS} ${SRC} -o ${NAME} 

fclean:		
	${RM} ${NAME}

re:		fclean all

.PHONY: all fclean re 