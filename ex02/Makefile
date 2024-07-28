# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/22 10:53:29 by jpaul-kr          #+#    #+#              #
#    Updated: 2024/07/22 12:50:44 by jpaul-kr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals
CC = c++ -std=c++98
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
RM = rm -rf

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)
