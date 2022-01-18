# code to work with.
# ft_putnbr_fd.c

NAME = libft.a

RM = rm -f

SRC = ft_isprint.c ft_isascii.c ft_isalnum.c ft_isupper.c ft_isalpha.c \
		ft_islower.c ft_isdigit.c ft_strlen.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_substr.c ft_calloc.c ft_strdup.c ft_strjoin.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_strmapi.c ft_memccpy.c\
		ft_memmove.c ft_memcmp.c ft_memchr.c ft_toupper.c ft_tolower.c\
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_atoi.c\
		ft_strlcat.c



#functions to work:
#
#  isalnum (later)
#   and print it on the desired file descriptor)			
# 
#	todo for today jan17, do at least all of these:
#
#	--ft_strlcat
#	--ft_strnstr
#	
#	--ft_strnstr (how to get it right?)
#	--ft_strncmp (bugs to fix, but its almost close too)
#	--ft_memcmp (done, fix some bugs)
#	--ft_strlcpy (not even close, take your time)
#	--ft_memmove (almost done, find a way to overlap, without malloc)
#	--strjoin (good, but there is an issue)
#	--substr (good so far, but there's a small crash)
#	--strmapi() finsish :).
#	--ft_atoi() almost, some small bugs to fix .
#	--strtrim ()
#	--ft_split()
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

