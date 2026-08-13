# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/13 17:05:03 by mariacos          #+#    #+#              #
#    Updated: 2026/08/13 20:12:55 by mariacos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	zombie

SRC_DIR	=	.
OBJ_DIR	=	obj

SRC		=	$(wildcard $(SRC_DIR)/*.cpp)
OBJ		=	$(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXX		=	c++
CXXFLAGS =	-Wall -Werror -Wextra -std=c++98 -IInclude
RM		=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking executable."
	@$(CXX) $(OBJ) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@echo "Compiling $@."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "Removing object files."
	@$(RM) $(OBJ_DIR)

fclean: clean
	@echo "Removing executable."
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
