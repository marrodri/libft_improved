
#include "libft.h"

int ft_islower(int c){
	char unsigned_char = (char)c;
	if((unsigned_char >= 'a' && unsigned_char <= 'z')){
		return (1);
	}
	return (0);
}