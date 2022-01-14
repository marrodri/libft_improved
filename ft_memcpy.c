// TODO build ft_memccpy function
#include "libft.h"

void *ft_memcpy(char *dest, const char *src, size_t n){
	size_t i;

	i = 0;
	if(!dest && !src){
		return NULL;
	}
	while(i < n){
		dest[i] = src[i];
		i++;
	}
	return dest;
}