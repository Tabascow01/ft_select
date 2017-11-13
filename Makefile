NAME = ft_select
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS_NAME = main.c ft_store_argv.c

SRCS_PATH = srcs/

OBJ_NAME = $(SRCS_NAME:.c=.o)
OBJ_PATH = objs/

LIB = libft/
LIB_NAME = -lft
LIB_PATH = -L./libft/

INC_PATH = -I includes/

SRC = $(addprefix $(SRCS_PATH), $(SRCS_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(INC_PATH) $(OBJ) -g -o $(NAME) $(LIB_PATH) $(LIB_NAME)
	@echo "Compilation Ok"

$(OBJ_PATH)%.o: $(SRCS_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) $(INC_PATH) -g -o $@ -c $?
#	@echo "OBJ Ok"

clean:
	@rm -rf $(OBJ_PATH)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
