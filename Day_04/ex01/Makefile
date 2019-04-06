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
		AWeapon.cpp\
		PlasmaRifle.cpp\
		PowerFist.cpp\
		Enemy.cpp\
		SuperMutant.cpp\
		RadScorpion.cpp\
		Character.cpp\
SRC_DIR = ./src/
OBJ_DIR = ./obj/
OBJ = $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
NAME = Sorcerer
CFLAG = -Wall -Wextra -Werror
CC = clang++
INC =	./includes/AWeapon.hpp\
		./includes/PlasmaRifle.hpp\
		./includes/PowerFist.hpp\
		./includes/Enemy.hpp\
		./includes/SuperMutant.hpp\
		./includes/RadScorpion.hpp\
		./includes/Character.hpp\

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
