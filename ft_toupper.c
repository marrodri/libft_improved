
#include "libft.h"


// ** ascii values: 65 = A, 90 = Z; 97 = a, 122 = z
int ft_toupper(int c){
	return ft_islower(c) ? (c - 32) : (c);
}

