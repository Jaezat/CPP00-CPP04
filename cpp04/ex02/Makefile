# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/24 17:13:41 by mariacos          #+#    #+#              #
#    Updated: 2026/08/27 12:45:10 by mariacos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Abstract

SRC_DIR	=	srcs
OBJ_DIR	=	obj

FILES 	= 	AAnimal.cpp \
			Animal.cpp	\
			Brain.cpp	\
			Cat.cpp		\
			Dog.cpp		\
			main.cpp	

SRC		=	$(addprefix $(SRC_DIR)/,$(FILES))
OBJ		=	$(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC))

CXX		=	c++
CXXFLAGS =	-Wall -Werror -Wextra -std=c++98 -Iinclude
RM		=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Executed!"
	@$(CXX) $(OBJ) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)
	@echo "Cleaned!"

fclean: clean
	@$(RM) $(NAME)
	@echo "FCleaned!"

re: fclean all

.PHONY: all clean fclean re