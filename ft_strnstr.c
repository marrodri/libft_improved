

#include "libft.h"
// TODO test the ft_striswhitespace first.

char *ft_strnstr(const char *big, const char *little, size_t len){

	size_t is_founded = 0;
	size_t big_i = 0;
	size_t little_i = 0;
	size_t little_len = ft_strlen((char*)little);
	size_t strnstr_index = 0;

	if(ft_striswhitespace((char*)little)){
		return (char*)big;
	}
	
	while(big_i < len && big[big_i] && !is_founded){
		if(little[little_i] == big[big_i]){
			little_i++;
		}
		else{
			little_i = 0;
		}
		if(little_len == little_i){
			is_founded = 1;
		}	
		big_i++;
	}
	if(is_founded){
		strnstr_index = big_i - little_len;
		return (char*)(&big[strnstr_index]);
	}
	return (NULL);
}
