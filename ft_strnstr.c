

#include "libft.h"
// TODO test the ft_striswhitespace first.
int ft_iswhitespace(char c){
	return (c == ' ' || c == '\t' || c =='\n' ||
		c == '\r' || c == '\v' || c == '\f');
}

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

char *ft_strnstr(const char *big, const char *little, size_t len){

	size_t is_founded = 0;
	size_t big_i = 0;
	size_t little_i = 0;
	size_t little_len = ft_strlen((char*)little);
	size_t strnstr_index = 0;
	// return val
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
	//size =5 

	//0123456789 10  
	//hello worl  d
// 	    llo
	if(is_founded){
		//return the address of the first occurrence of 
		//little, inside the big string.
		strnstr_index = big_i - little_len;
		return (char*)(&big[strnstr_index]);
	}

	return (NULL);
}


// int main(){
// 	char *tst1 = " 			  \n \t \v \r   "; 
// 	char *tst2 = " 			  \n \tt\v \r   "; 
// 	char *tst3 = ""; 
// 	char *tst4 = NULL; 
// 	printf("is tst1 all white |%d|\n", ft_striswhitespace(tst1));
// 	printf("is tst2 all white |%d|\n", ft_striswhitespace(tst2));
// 	printf("is tst3 all white |%d|\n", ft_striswhitespace(tst3));
// 	printf("is tst4 all white |%d|\n", ft_striswhitespace(tst4));
// }