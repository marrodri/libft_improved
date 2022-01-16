#include "libft.h"

/*
** ft_bzero will set the data array to 0, starting from
** the pointed memory address to the defined length of the memory
** to delete.
*/
void *ft_bzero(void *s, size_t n){
	return ft_memset(s, '\0', n);
}