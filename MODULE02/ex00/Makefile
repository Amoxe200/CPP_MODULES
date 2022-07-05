# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 03:38:35 by aaqari            #+#    #+#              #
#    Updated: 2022/07/04 14:01:41 by aaqari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CC = c++ -g
SRC = main.cpp fixed.cpp
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