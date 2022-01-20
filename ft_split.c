
#include "libft.h"


int ft_strclen(const char* str, int c){
	int len = 0;
	while(str[len] != c && str[len]){
		len++;
	}
	return len;
}

char *ft_itoa(char const *s, char c){
	int words = 0;

	// first iterate by counting how many words there are,
	//  by separating the c char

	//then allocate the words + 1. with malloc

	//then iterate the s, by finding the starting address of the word
	//and the length of the word to copy.
}