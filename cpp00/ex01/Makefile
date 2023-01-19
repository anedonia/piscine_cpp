# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldevy <ldevy@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/20 18:45:47 by ldevy             #+#    #+#              #
#    Updated: 2023/01/18 17:32:32 by ldevy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Contact.cpp PhoneBook.cpp

NAME 	= phonebook

RM		= rm -rf

CC		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -I includes -g3

all:		${NAME}

${NAME}:	
	${CC} ${CFLAGS} ${SRC} -o ${NAME} 

fclean:		
	${RM} ${NAME}

re:		fclean all

.PHONY: all fclean re 