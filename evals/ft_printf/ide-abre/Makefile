CC := cc
CCFLAGS := -Wall -Werror -Wextra
NAME := libftprintf.a
CSOURCES := ft_printf.c \
			helpers/ft_strlen.c \
			helpers/print_address.c \
			helpers/print_char.c \
			helpers/print_hexadecimal.c \
			helpers/print_number.c \
			helpers/print_string.c \
			helpers/print_unsigned.c

COBJS := $(CSOURCES:.c=.o)

all: $(NAME)

$(NAME): $(COBJS)
	ar rcs $(NAME) $^
	
fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(COBJS)

re: fclean all

.PHONY: all clean fclean re
