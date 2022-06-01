# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoxe <amoxe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 15:40:00 by amoxe             #+#    #+#              #
#    Updated: 2022/06/01 15:41:50 by amoxe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = c++
SRC = main.cpp
OBJ = ${SRC:.cpp=.o}
FLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

all:${NAME}

${NAME}:
	@$(CC) $(SRC) $(FLAGS) -o ${NAME}
clean:
	rm -rf ${OBJ}
fclean: clean
		rm -rf ${NAME}
re: fclean all