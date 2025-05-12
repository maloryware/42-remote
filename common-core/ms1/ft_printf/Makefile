# To test program, execute 'make run'. #

NAME = libftprintf.a

ETC = etc

LIBS = $(ETC)/stdlibs
PRNT = $(ETC)/printers

# ------------- #

STDLIBS = $(LIBS)/mini_libft.c $(LIBS)/substr.c \
			$(LIBS)/atoi.c $(LIBS)/itoa.c

PRINTERS = $(PRNT)/print_char.c $(PRNT)/print_dec_int.c \
			$(PRNT)/print_hex.c $(PRNT)/print_pointer.c \
			$(PRNT)/print_string.c $(PRNT)/print_uint.c

SRC = ft_printf.c \
			$(STDLIBS) $(PRINTERS) \
			$(ETC)/format_delegator.c \
			$(ETC)/aux.c

# ------------- #

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

# ------------- #

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo Finished compiling.

%.o: %.c
	$(CC) $(CFLAGS) -I$(ETC) -c $< -o $@

list: $(NAME)
	@ar -t $(NAME) | sed 's/\.o/.c/g' | awk '{print "#include \"" $$1 "\""}'

run: $(NAME) $(OBJ) $(LOCMAIN)
	@$(CC) $(CFLAGS) -o main_test.out __loc_main.c $(NAME)
	@echo 
	@echo '|-----TEST-----|'
	@echo 
	@./main_test.out
	@echo
	@echo
	@echo '|-----TEST-----|'
	@echo
	@make clean
	@rm main_test.out

$(LOCMAIN):
	
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re