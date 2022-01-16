
#include "libft.h"

// ** asci1i values: 65 = A, 90 = Z; 97 = a, 122 = z
int ft_tolower(int c){
	if(ft_isupper(c)){
		return (c + 32);
	}
	return (c);
}