# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/22 11:34:15 by namatias          #+#    #+#              #
#    Updated: 2026/07/22 11:38:24 by namatias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                       FLAGS AND VARIABLES TO COMPILE                         #
################################################################################

NAME = FragTrap

CPP = c++
CPPFLAGS = -Wall -Werror -Werror -std=c++98

OBJ_DIR = ./obj/
INC_DIR = ./include/
SRC_DIR = ./src/

SRC_FILES = main.cpp \
			ClapTrap.cpp \
			Style.cpp \
			ScavTrap.cpp \
			FragTrap.cpp

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

.PHONY: all clean fclean re
