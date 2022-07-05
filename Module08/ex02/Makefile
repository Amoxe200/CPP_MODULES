# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/05 01:35:01 by aaqari            #+#    #+#              #
#    Updated: 2022/07/05 01:35:15 by aaqari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutant
CC = c++ -g
SRC = main.cpp
ObJ = ${SRC:.cpp=.o}
FLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}:
		@$(CC) $(SRC) $(FLAGS) -o ${NAME}

clean:
		rm -rf $(ObJ)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all