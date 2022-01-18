

#include "libft.h"
// TODO test the ft_striswhitespace first.
int ft_iswhitespace(char c){
	return (c == ' ' || c == '\t' || c =='\n' ||
		c == '\r' || c == '\v' || c == '\f');
}

int ft_striswhitespace(char *str){
	int i = 0;
	int c = 0;
	while(!(c = ft_iswhitespace(str[i]))){
		i++;
	}
	if(!str[i]){
		return (1);
	}
	return (0);
}

char *ft_strnstr(const char *big, const char *little, size_t len){

	int is_founded = 0;
// return val
	if(!little || ft_striswhitespace(little)){
		return big;
	}


	if(is_founded){
		//return the address of the first occurrence of 
		//little, inside the big string.
		return ;
	}

	return NULL;
}


int main(){}