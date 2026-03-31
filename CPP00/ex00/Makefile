# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namatias <namatias@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/31 13:18:38 by namatias          #+#    #+#              #
#    Updated: 2026/03/31 14:18:29 by namatias         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                       FLAGS AND VARIABLES TO COMPILE                         #
################################################################################

NAME = megaphone

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR =	./obj/

SRC_FILES = megaphone.cpp
OBJS = 		$(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

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

$(OBJ_DIR)%.o: %.cpp
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