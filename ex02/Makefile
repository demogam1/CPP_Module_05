NAME=Bureaucrat

CC=clang++

FLAG=-Wall -Werror -Wextra -std=c++98

SRC=Bureaucrat.cpp Form.cpp main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp \

all:$(NAME)

$(NAME):
	$(CC) $(FLAG) $(SRC) -o $(NAME)

fclean:
	rm $(NAME)

re: fclean all

.Phony : all fclean