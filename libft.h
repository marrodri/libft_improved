
#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
#include <stdio.h>
typedef struct	s_list{
	void 			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** Boolean Utils
*/

int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isdigit(int d);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_iswhitespace(char c);
int		ft_striswhitespace(char *str);

/*
** String and chars Utils
*/

int		ft_strlen(char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(char *str); 
char	*ft_strjoin(char const *pre_str, char const *suf_str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);

/*
** Text file descriptors Output Utils
*/

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/*
** Memory Utils
*/

void	*ft_calloc(size_t n_itmes, size_t size);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

/*
** Linked List Utils
*/

t_list *ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

#endif