NAME =		karenFilter

CXX =		clang++

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

SRCS =		main.cpp Karen.cpp

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