NAME = phone_book

DIR_S = srcs/

SOURCES = main.cpp

HEADER = include.hpp

INC = inc/

SRCS = $(addprefix $(DIR_S),$(SOURCES))

OBJS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(OBJS) $(FLAGS) -o $(NAME)

$(OBJS): $(SRCS) $(INC)$(HEADER)
	g++ -c $(SRCS) $(FLAGS) -I $(INC)

norme:
	norminette ./$(DIR_S)

bonus: all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all