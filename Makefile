
NAME = libft.a

RM = rm -f

SRC = ft_isprint.c ft_isascii.c ft_isalnum.c ft_isupper.c ft_isalpha.c \
		ft_islower.c ft_isdigit.c ft_strlen.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_substr.c ft_calloc.c ft_strdup.c ft_strjoin.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_strmapi.c ft_memccpy.c\
		ft_memmove.c ft_memcmp.c ft_memchr.c ft_toupper.c ft_tolower.c\
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_atoi.c\
		ft_strlcat.c ft_strnstr.c ft_striswhitespace.c ft_iswhitespace.c\
		ft_lstnew.c ft_lstsize.c ft_lstadd_front.c ft_lstadd_back.c\
		ft_strtrim.c ft_split.c ft_itoa.c ft_putnbr_fd.c ft_lstlast.c\
		ft_lstdelone.c

#functions to work:
#
#  isalnum (later)
#   and print it on the desired file descriptor)			
# 
#	todo for tomorrow jan20, do at least all of these:
#	--ft_putnbr_fd (this one needs the ft_itoa to return the transformed string
#	--ft_lstlast
#	--lstdelone
#	--lstclear
#	--lstiter
#	--lstmap


#	--ft_strlcat (almost done, just one issue :)
#	--ft_strlcpy (almost done, just one issue :)
#	--substr (good so far, but there's a small crash)
#	--strjoin (good, but there its not protected)
#	--strtrim (good, almost done too)
#	--ft_split(good, almost done, just 3 bugs to check :)
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

