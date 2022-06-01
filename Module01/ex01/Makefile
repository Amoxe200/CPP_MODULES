# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 14:58:43 by amoxe             #+#    #+#              #
#    Updated: 2022/05/29 15:56:45 by amoxe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = c++
SRC = main.cpp newZombie.cpp zombie.cpp zombieHorde.cpp
OBJ = ${SRC:.cpp=.o}
FLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

all: ${NAME}

${NAME}:
		@$(CC) $(SRC) $(FLAGS) -o ${NAME}
clean:
		rm -rf ${OBJ}
fclean: clean
		rm -rf ${NAME}
re: fclean all