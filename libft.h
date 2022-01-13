
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
//this function still has errors.
char *ft_substr(char const *s, unsigned int start, size_t len);
//on works.
char *ft_strdup(char *str); 
char *ft_strjoin(char const *pre_str, char const *suf_str);


/*
** Text file descriptors Output Utils
*/

void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);


/*
** Memory Utils
*/

void *ft_calloc(size_t n_itmes, size_t size);
void *ft_memset(char *str, int c, size_t n);
void *ft_bzero(char *str, size_t n);
void *ft_memcpy(char *dest, const char *src, size_t n);
// void *ft_calloc(size_t num, size_t size);
/*
** Linked List Utils
*/



#endif