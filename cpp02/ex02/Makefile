# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariacos <mariacos@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/19 12:28:06 by mariacos          #+#    #+#              #
#    Updated: 2026/08/23 17:42:25 by mariacos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixedAgain

SRC_DIR	=	srcs
OBJ_DIR	=	obj

SRC		=	$(wildcard $(SRC_DIR)/*.cpp)
OBJ		=	$(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

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