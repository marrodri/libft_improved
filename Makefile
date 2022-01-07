
NAME = libft.a

RM = rm -f

SRC = ft_isprint.c ft_isascii.c ft_isalnum.c ft_isalpha.c \
		ft_isdigit.c ft_strlen.c

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

$(NAME):
		@gcc $(CFLAGS) -c $(SRC)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

all: $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

