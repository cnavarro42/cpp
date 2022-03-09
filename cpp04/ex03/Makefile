NAME =		materia

CXX =		clang++

CXXFLAGS =	-Wall -Wextra -Werror -g -std=c++98

RM =		rm -rf

SRCS =		main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
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