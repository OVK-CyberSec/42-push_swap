# Standard
NAME			= libft.a

# Directories
INC				= includes/
SRC_DIR			= srcs/
OBJ_DIR			= obj/

# Compielr and Flags
CC				= gcc
CFLAGS			= -Wall -Wextra -Werror -I
RM				= rm -f
AR				= ar rcs

# Source Files
FTIS_DIR		=	$(SRC_DIR)ft_isdigit.c \

FTSTR_DIR		=	$(SRC_DIR)ft_split.c \

FTPRINTF_DIR	=	$(SRC_DIR)ft_printf/ft_printf.c \
					$(SRC_DIR)ft_printf/ft_print_ptr.c \
					$(SRC_DIR)ft_printf/ft_putchar_fd.c \
					$(SRC_DIR)ft_printf/print_format.c \
					$(SRC_DIR)ft_printf/print_utils.c \


# Concatenate all source files
SRC 			= $(FTIS_DIR) $(FTSTR_DIR) $(FTPRINTF_DIR) 

# Apply the pattern substitution to each source file in SRC and produce a corresponding list of object files in the OBJ_DIR
OBJ 			= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC))

# Build rules
all: 			$(NAME)

$(NAME): 		$(OBJ)
				@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(@D)
				@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
				@$(RM) -r $(OBJ_DIR)
				@$(RM) .cache_exists

fclean: 		clean
				@$(RM) $(NAME)

re: 			fclean all

.PHONY: 		all clean fclean re