
#include "libft.h"

int ft_striswhitespace(char *str){
	int i = 0;
	if(!str){
		return (1);
	}
	while(ft_iswhitespace(str[i])){
		i++;
	}
	return (!str[i]) ? 1 : 0;
}
