#include "libft.h"
#include "string.h"

/*
** it fills the data to the str with the c val, 
** under a n of times.
*/
void *ft_memset(void *s, int c, size_t n){
	size_t i;
	unsigned char *unsigned_str;
	unsigned char unsigned_char;
	i = 0;
	
	unsigned_str = (unsigned char*)s;
	unsigned_char = (unsigned char)c;
	while(i < n){
		unsigned_str[i] = unsigned_char;
		i++;
	}
	return (unsigned_str);
}