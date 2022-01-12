#include "libft.h"


void *ft_calloc(size_t n_items, size_t size){
	char *alloc_mem;
	size_t i = 0;
	//try to allocate it as a string, and see how it goes.
	size_t totalSize = n_items*size;
	alloc_mem = (char*)malloc(totalSize * (sizeof(char)));

	if(!alloc_mem){
		return NULL;
	}
	while(i < totalSize){
		alloc_mem[i] = '\0';
		i++;
	}
	return (alloc_mem);
}