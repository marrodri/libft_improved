
#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n){

	unsigned char *dest_arr = (unsigned char*)dest;

	const unsigned char *src_arr = (const unsigned char *)src;
	
	
	size_t i = 0;
	while(src_arr[i] != c && src_arr[i] && i < n){
		dest_arr[i] = src_arr[i];
		i++;
	}
	if(src_arr[i] == c){
		dest_arr[i] = src_arr[i];
		return &dest_arr[i + 1];
	}
	return NULL;
}