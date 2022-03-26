# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 13:16:56 by tamigore          #+#    #+#              #
#    Updated: 2022/03/24 15:03:12 by tamigore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

NAME = serialize

DIR_S = srcs/

SOURCES =	main.cpp		\
			Data.cpp

HEADER =	Data.hpp

INC = inc/

SRCS = $(addprefix $(DIR_S),$(SOURCES))

OBJS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(FLAGS) -o $(NAME)

$(OBJS): $(SRCS) $(INC)
	$(CXX) -c $(SRCS) $(FLAGS) -I $(INC)

bonus: all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
