
// build ft_strlcpy.c
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size){
	// return the length of src.
	size_t src_len = ft_strlen((char*)src);
	size_t i = 0;
	dst[size] = '\0';
	if(!src || !dst){
		return (0);
	}
	while(i < size && src[i] && size < src_len){
		dst[i] = src[i];
		i++;
	}

	return (src_len);
}