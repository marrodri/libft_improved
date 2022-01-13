#include "libft.h"

/*
** ft_bzero will set the data array to 0, starting from
** the pointed memory address to the defined length of the memory
** to delete.
*/
void *ft_bzero(char *str, size_t n){
	return ft_memset(str, '\0', n);
}