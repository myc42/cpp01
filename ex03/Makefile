# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 17:49:19 by macoulib          #+#    #+#              #
#    Updated: 2025/12/17 17:55:54 by macoulib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Weapon
CX = c++
FX = -Wall -Wextra -Werror -std=c++98

SRC_DIR = src
SRCS =  $(SRC_DIR)/HumanA.cpp $(SRC_DIR)/HumanB.cpp  $(SRC_DIR)/Weapon.cpp main.cpp
OBJ_DIR = obj
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)
	@echo "Compilation terminée !"

$(NAME): $(OBJS)
	@$(CX) $(FX) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CX) $(FX) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)
	@echo "Nettoyage complet terminé."

re: fclean all

.PHONY: all clean fclean re