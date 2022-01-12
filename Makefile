# code to work with.
# ft_putnbr_fd.c

NAME = libft.a

RM = rm -f

SRC = ft_isprint.c ft_isascii.c ft_isalnum.c ft_isalpha.c \
		ft_isdigit.c ft_strlen.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_substr.c ft_calloc.c ft_strdup.c ft_strjoin.c
		
#functions to work:
#

#  isalnum (later)
#	strdup -- finished and working good :)
#	ft_itoa
#	ft_putnbr_fd (this one needs the ft_itoa to return the transformed string
#   and print it on the desired file descriptor)			
# 

#	todo for today jan11:
#	--strjoin (good, but there is an issue)
#	--strtrim ()
#	--substr
#	--strmapi.
#	--ft_split
#	--ft_itoa 

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

