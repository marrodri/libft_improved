
#include "libft.h"

// 32 = " ", 126 = "~"
//check if this should be from the start at
//0, that is null.
int ft_isascii(int c){
	if(c >= 0 && c <= 127){
		return (1);
	}
	return (0);
}