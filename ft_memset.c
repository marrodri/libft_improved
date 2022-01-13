#include "libft.h"
#include "string.h"

/*
** it fills the data to the str with the c val, 
** under a n of times.
*/
void *ft_memset(char *str, int c, size_t n){
	size_t i;

	i = 0;
	while(i < n){
		str[i] = c;
		i++;
	}
	return (str);
}