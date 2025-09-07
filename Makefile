# Standard
NAME				= push_swap

# Directories
LIBFT				= ./libft/libft.a
INC					= inc/
SRC_DIR				= srcs/
OBJ_DIR				= obj/

# Compiler and CFlags
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I
RM					= rm -f

COMMANDS_DIR		=	$(SRC_DIR)operations/push.c \
						$(SRC_DIR)operations/reverse_rotate.c \
						$(SRC_DIR)operations/rotate.c \
						$(SRC_DIR)operations/sort_stacks.c \
						$(SRC_DIR)operations/sort_three.c \
						$(SRC_DIR)operations/swap.c

PUSH_SWAP_DIR		=	$(SRC_DIR)utils/handle_errors.c \
						$(SRC_DIR)utils/init_a_to_b.c \
						$(SRC_DIR)utils/init_b_to_a.c \
						$(SRC_DIR)push_swap.c \
						$(SRC_DIR)utils/stack_init.c \
						$(SRC_DIR)utils/stack_utils.c \
						$(SRC_DIR)utils/mem_utils.c


# Concatenate all source files
SRCS 				= $(COMMANDS_DIR) $(PUSH_SWAP_DIR)

# Apply the pattern substitution to each source file in SRC and produce a corresponding list of object files in the OBJ_DIR
OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

# Build rules
start:				
					@make all

$(LIBFT):
					@make -C ./libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)

re: 				fclean all

# Phony targets represent actions not files
.PHONY: 			start all clean fclean re