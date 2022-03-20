# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 13:16:56 by tamigore          #+#    #+#              #
#    Updated: 2022/03/20 12:44:48 by tamigore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = animal

DIR_S = srcs/

SOURCES =	main.cpp	\
			Animal.cpp	\
			Dog.cpp		\
			Cat.cpp		\
			WrongCat.cpp\
			WrongAnimal.cpp

HEADER =	Animal.hpp	\
			Cat.hpp		\
			Dog.hpp		\
			WrongCat.hpp\
			WrongAnimal.hpp

INC = inc/

SRCS = $(addprefix $(DIR_S),$(SOURCES))

OBJS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

$(OBJS): $(SRCS) $(INC)
	$(CC) -c $(SRCS) $(FLAGS) -I $(INC)

bonus: all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
