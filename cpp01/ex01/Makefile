NAME =		horde

CXX =		clang++

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

SRCS =		Zombie.cpp ZombieHorde.cpp main.cpp

OBJS =		$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re