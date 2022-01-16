

#include "libft.h"

int ft_isupper(int c){
	char unsigned_char = (char)c;
	if(unsigned_char >= 'A' && unsigned_char <= 'Z'){
		return (1);
	}
	return (0);
}