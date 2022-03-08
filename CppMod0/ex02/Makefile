NAME = megaphone

DIR_S = srcs/

SOURCES = megaphone.cpp

SRCS = $(addprefix $(DIR_S),$(SOURCES))

OBJS = $(SOURCES:.cpp=.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	g++ $(OBJS) $(FLAGS) -o $(NAME)

$(OBJS): $(SRCS)
	g++ -c $(SRCS) $(FLAGS)

norme:
	norminette ./$(DIR_S)

bonus: all

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all