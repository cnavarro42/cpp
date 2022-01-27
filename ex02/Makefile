NAME =		Account

CXX =		clang++

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

SRCS =		Account.cpp tests.cpp

OBJS =		$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean res