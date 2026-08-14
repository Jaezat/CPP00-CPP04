# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariacos <mariacos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/13 17:05:03 by mariacos          #+#    #+#              #
#    Updated: 2026/08/14 21:41:30 by mariacos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brain

OBJ_DIR	=	obj

SRC		=	$(wildcard *.cpp)
OBJ		=	$(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

CXX		=	c++
CXXFLAGS =	-Wall -Werror -Wextra -std=c++98 -Iinclude
RM		=	rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Executing!"
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
