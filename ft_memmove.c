// build ft_memmove.c

// #include"string.h"
#include"libft.h"
// TODO work on this function later
void *ft_memmove(void *dest, const void *src, size_t n){
	if(!dest && !src){
		return NULL;
	}
	size_t i = 0;
	unsigned char *dest_arr = (unsigned char*)dest;
	const unsigned char *src_arr = (const unsigned char *)src;
	const char *tmp_arr = ft_calloc(n + 1,sizeof(char));
	//set the tmp_arr
	ft_memcpy((char *)tmp_arr, (const char*)src_arr, n);
	//copy from tmp to dest.
	while(i < n ){
		dest_arr[i] = tmp_arr[i];
		i++;
	}
	return (dest);
}