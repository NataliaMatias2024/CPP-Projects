# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/01 12:54:37 by namatias          #+#    #+#              #
#    Updated: 2026/07/02 19:58:30 by namatias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                       FLAGS AND VARIABLES TO COMPILE                         #
################################################################################
NAME = zombies

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

OBJ_DIR =	./obj/
SRC_DIR =	./src/
INC_DIR =	./include/

SRC_FILES = main.cpp \
			Zombie.cpp \
			zombieHorde.cpp

OBJS = 		$(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))
INCLUDES =	-I $(INC_DIR)
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
	@$(CPP) $(CPPFLAGS) $(INCLUDES) -c $< -o $@
	@echo "[$(GREEN)OK$(RESET)] OBJS COMPILED $<"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "[$(GREEN)OK$(RESET)] FILES CLEAR!"

fclean: clean
	@rm -f $(NAME)
	@echo "[$(GREEN)OK$(RESET)] ALL CLEAR!"

re: fclean all

val: all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

.PHONY: all clean fclean re
