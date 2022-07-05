# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 00:27:13 by aaqari            #+#    #+#              #
#    Updated: 2022/07/04 14:01:41 by aaqari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie
CC = c++
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
ObJ = ${SRC:.cpp=.o}
FLAGS = -Wall -Wextra -Werror  -std=c++98

all: ${NAME}

${NAME}:
		@$(CC) $(SRC) $(FLAGS) -o ${NAME}

clean:
		rm -rf $(ObJ)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all