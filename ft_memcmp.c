

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n){
	unsigned char *s1_unsigned = (unsigned char *)s1;
	unsigned char *s2_unsigned = (unsigned char *)s2;
	size_t i = 0;
	// TODO (fix later the memcmp), for this function, check the testing and
	// bring a notebook to fix this issue later by hand.
	if(n == 0 || (!s1_unsigned && !s2_unsigned)){
		return (0);
	}
	while((s1_unsigned[i] == s2_unsigned[i]) && (i < n)
			&& s1_unsigned[i] && s2_unsigned){
		i++;
	}
	if(i == n){
		return (s1_unsigned[i - 1] - s2_unsigned[i - 1]);
	}
	return (s1_unsigned[i] - s2_unsigned[i]);
}