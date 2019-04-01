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

SRC = megaphone.cpp
OBJ_DIR = ./obj/
OBJ = $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
NAME = megaphone
CFLAG = -Wall -Wextra -Werror
CC = clang++

all:  $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAG) $(OBJ) -o $(NAME)
		
$(OBJ_DIR)%.o:%.cpp
	$(CC) -c $< -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

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

vpath %.c $(SRC_DIR)
