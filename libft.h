
#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list{
	void 			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** Boolean Utils
*/
int ft_isalpha(int c);
int ft_isdigit(int d);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

/*
** String Utils
*/
int ft_strlen(char *str);

// char *ft_strlcpy();
// char *strlcat();
// char *ft_toupper();
// char *ft_strdup(char *str); 
/*
** Memory Utils
*/

// void *ft_memset();
// void *ft_memcpy();
// void ft_bzero();
// void *ft_calloc(size_t num, size_t size);
/*
** Linked List Utils
*/

#endif