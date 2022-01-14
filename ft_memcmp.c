

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n){
	unsigned char *s1_unsigned = (unsigned char *)s1;
	unsigned char *s2_unsigned = (unsigned char *)s2;

	size_t i = 0;

	while(s1_unsigned[i] == s2_unsigned[i] && 
			s1_unsigned && s2_unsigned && i < n){
		i++;
	}
	return (s1_unsigned[i] - s2_unsigned[i]);
}