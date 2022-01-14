# code to work with.
# ft_putnbr_fd.c

NAME = libft.a

RM = rm -f

SRC = ft_isprint.c ft_isascii.c ft_isalnum.c ft_isalpha.c \
		ft_isdigit.c ft_strlen.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_substr.c ft_calloc.c ft_strdup.c ft_strjoin.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_strmapi.c
		
#functions to work:
#

#  isalnum (later)
#   and print it on the desired file descriptor)			
# 

#	todo for today jan12, do at least all of these:
#	--ft_memset (done, and finished)
#	--ft_bzero (done), this is used inside calloc.
#	--ft_memcpy (done)
#	--ft_memmove ()
#	--ft_memcmp ()
#	
#	--strjoin (good, but there is an issue)
#	--substr (good so far, but there's a small crash)
#	--ft_atoi()
#	--strtrim ()
#	--strmapi() test this one, if it works.
#	--ft_split
#	-Common Instructions-ft_itoa 
#	ft_putnbr_fd (this one needs the ft_itoa to return the transformed string
#


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
