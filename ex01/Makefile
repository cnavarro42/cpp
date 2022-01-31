NAME =		spacelist

CXX =		clang++

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

SRCS =		Contactlist.cpp Contact.cpp Spacelist.cpp

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