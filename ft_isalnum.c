
#include "libft.h"

/*
** usage: ft_isalnum(int c)
** it checks the input and returns 1 if its alphabetic letter;
**    otherwise, it returns a 0.
** ascii values: 65 = A, 90 = Z; 97 = a, 122 = z
*/
int ft_isalnum(int c){
	if((ft_isdigit(c)) || (ft_isalpha(c))){
		return (1);
	}
	return (0);
}