# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 13:16:56 by tamigore          #+#    #+#              #
#    Updated: 2022/03/24 14:57:29 by tamigore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

NAME = literal

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(FLAGS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CXX) -c $(SRCS) $(FLAGS)

bonus: all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
