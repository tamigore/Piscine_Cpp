# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 13:16:56 by tamigore          #+#    #+#              #
#    Updated: 2022/03/11 12:59:26 by tamigore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

NAME = sed

SOURCES = main.cpp

SRCS = $(SOURCES)

OBJS = $(SOURCES:.cpp=.o)

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