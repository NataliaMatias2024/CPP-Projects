# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/02 23:04:51 by namatias          #+#    #+#              #
#    Updated: 2026/07/03 00:44:26 by namatias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                       FLAGS AND VARIABLES TO COMPILE                         #
################################################################################
NAME = brains

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

OBJ_DIR =	./obj/
SRC_DIR =	./src/

SRC_FILES = main.cpp

OBJS = 		$(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))
SRCS =		$(addprefix $(SRC_DIR), $(SRC_FILES))

################################################################################
#                                   COLORS                                     #
################################################################################

GREEN = \033[0;32m
RESET = \033[0m

################################################################################
#                          		   FUNCTIONS								   #
################################################################################

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "[$(GREEN)OK$(RESET)] $(NAME) COMPILED!"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(dir $@)
	@$(CPP) $(CPPFLAGS) -c $< -o $@
	@echo "[$(GREEN)OK$(RESET)] OBJS COMPILED $<"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "[$(GREEN)OK$(RESET)] FILES CLEAR!"

fclean: clean
	@rm -f $(NAME)
	@echo "[$(GREEN)OK$(RESET)] ALL CLEAR!"

re: fclean all

.PHONY: all clean fclean re