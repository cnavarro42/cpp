NAME =		intern

CXX =		clang++

CXXFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =		rm -rf

SRCS =		main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS =		$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)
fclean: clean
		$(RM) $(NAME)
		$(RM) shrub_shrubbery
re: fclean all

.PHONY: all clean fclean re