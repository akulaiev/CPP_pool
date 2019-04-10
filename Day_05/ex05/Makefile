# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akulaiev <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 19:48:51 by akulaiev          #+#    #+#              #
#    Updated: 2019/04/01 19:48:53 by akulaiev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp\
		Intern.cpp\
		OfficeBlock.cpp\
		CentralBureaucracy.cpp
SRC_DIR = ./src/
OBJ_DIR = ./obj/
OBJ = $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
NAME = SuperBuro
CFLAG = -Wall -Wextra -Werror
CC = clang++
INC =	./includes/Bureaucrat.hpp\
		./includes/Form.hpp\
		./includes/PresidentialPardonForm.hpp\
		./includes/RobotomyRequestForm.hpp\
		./includes/ShrubberyCreationForm.hpp\
		./includes/Intern.hpp\
		./includes/OfficeBlock.hpp\
		./includes/CentralBureaucracy.hpp
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAG) $(OBJ) -o $(NAME)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp $(INC)
	$(CC) $(CFLAG) -I/includes -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

exe:
	./$(NAME)

re: fclean all

commit:
	make fclean
	git add -A
	git commit -m "$(MSG)"
	git push
