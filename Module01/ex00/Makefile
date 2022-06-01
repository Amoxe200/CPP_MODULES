# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 12:35:59 by amoxe             #+#    #+#              #
#    Updated: 2022/05/24 12:53:56 by amoxe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = c++
SRC = main.cpp newZombie.cpp randomChump.cpp zombie.cpp
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