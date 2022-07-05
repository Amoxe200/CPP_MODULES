# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaqari <aaqari@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/03 06:54:27 by aaqari            #+#    #+#              #
#    Updated: 2022/07/04 14:01:41 by aaqari           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat
CC = c++ -g
SRC = main.cpp Bureaucrat.cpp 
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