# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 15:43:47 by macoulib          #+#    #+#              #
#    Updated: 2025/12/18 15:50:51 by macoulib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CX = c++
FX = -Wall -Wextra -Werror -std=c++98

SRC_DIR = src
SRCS =  main.cpp
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



