# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 11:28:07 by aaqari            #+#    #+#              #
#    Updated: 2022/07/04 14:01:41 by aaqari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal
CC = c++ -g
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
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