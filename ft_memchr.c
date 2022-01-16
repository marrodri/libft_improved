
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n){
	// DONE, both const void and int, MUST BE CASTED AS unsigned char.
	unsigned char 	*unsigned_str;	
	unsigned char 	unsigned_char;	
	size_t 			i;

	i = 0;
	unsigned_str = (unsigned char *)s;
	unsigned_char = (unsigned char)c;
	while(i < n && unsigned_str[i] && unsigned_str[i] != unsigned_char ){	
		i++;
	}
	if(unsigned_str[i] == unsigned_char ){
		return &unsigned_str[i];
	}
	return NULL;
}