# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 15:59:13 by aaqari            #+#    #+#              #
#    Updated: 2022/06/21 07:01:50 by aaqari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++
SRC = contact.cpp phoneBook.cpp main.cpp
ObJ = ${SRC:.cpp=.o}
FLAGS = -Wall -Wextra -Werror  -std=c++98 -g -fsanitize=address

all: ${NAME}

${NAME}:
		@$(CC) $(SRC) $(FLAGS) -o ${NAME}

clean:
		rm -rf $(ObJ)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all