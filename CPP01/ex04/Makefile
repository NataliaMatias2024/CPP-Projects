################################################################################
#                       FLAGS AND VARIABLES TO COMPILE                         #
################################################################################
NAME = replace

CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

OBJ_DIR =	./obj/
SRC_DIR =	./src/

SRC_FILES = main.cpp \

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
