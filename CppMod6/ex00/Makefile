# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 13:16:56 by tamigore          #+#    #+#              #
#    Updated: 2022/03/18 19:33:31 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = frag

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FLAGS) -o $(NAME)

$(OBJS): $(SRCS)
	$(CC) -c $(SRCS) $(FLAGS)

bonus: all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
