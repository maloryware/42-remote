NAME = libft.a

SRCS = ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_striteri.c \
ft_strnstr.c ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c \
ft_strrchr.c ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c \
ft_strtrim.c ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c \
ft_substr.c ft_isalpha.c ft_memcpy.c ft_split.c ft_strlen.c \
ft_tolower.c ft_isascii.c ft_memmove.c ft_strchr.c ft_strmapi.c \
ft_toupper.c ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c \
ft_lstclear.c ft_lstlast.c ft_lstsize.c ft_lstiter.c \
ft_lstdelone.c ft_lstmap.c

OBJS = $(SRCS:%.c=%.o)

BONUS_OBJS = $(BONUS_SRCS:%.c=%.o)

CC = gcc

CCFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	touch bonus

%.o: %.c libft.h
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
