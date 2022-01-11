#include "libft.h"


void *ft_calloc(size_t n_items, size_t size){
	size_t *alloc_mem;
	size_t i = 0;
	//try to allocate it as a string, and see how it goes.
	alloc_mem = malloc((n_items) * size);

	if(!alloc_mem){
		return NULL;
	}
	return alloc_mem;
}