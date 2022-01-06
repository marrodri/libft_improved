
#include "libft.h"

// 32 = " ", 126 = "~"
//check if this should be from the start at
//0, that is null.
int ft_isascii(int c){
	if(c >= " " && c <= "~"){
		return (1);
	}
	return (0);
}