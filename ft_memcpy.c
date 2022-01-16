// TODO build ft_memccpy function
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n){
	size_t i;
	unsigned char *unsigned_dest = (unsigned char *)dest;
	unsigned char *unsigned_src = (unsigned char *)src;

	i = 0;
	if(!unsigned_dest && !unsigned_src){
		return (NULL);
	}
	while(i < n){
		unsigned_dest[i] = unsigned_src[i];
		i++;
	}
	return (unsigned_dest);
}