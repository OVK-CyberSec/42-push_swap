NAME				= push_swap

LIBFT				= ./libft/libft.a
INC					= includes/
SRC_DIR				= srcs/
OBJ_DIR				= obj/

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
						$(SRC_DIR)utils/stack_utils.c


SRCS 				= $(COMMANDS_DIR) $(PUSH_SWAP_DIR)

OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

start:				
					@make all

$(LIBFT):
					@make -C ./libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)

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

.PHONY: 			start all clean fclean re