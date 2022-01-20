// build ft_strlcat.c

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size){

	// cat form: dst + src.
	size_t dst_len = ft_strlen(dst);
	size_t src_len = ft_strlen((char*)src);
	size_t src_i = 0;
	size_t dst_i = dst_len;

	// size + dst_len - 1 byte(ignore the null byte).
	if(size <= 0 || size < dst_len){
		// return 0;
		return(src_len + size);
	}
	// dst[dst_len + size] = '\0';
	size = dst_len - size - 1;
	while(size > 0  && src[src_i]){
		// concatenating dst
		dst[dst_i] =  src[src_i];
		dst_i++;
		src_i++;
		size--;
	}
	dst[dst_i] = '\0';
	return (dst_len + src_len);
}