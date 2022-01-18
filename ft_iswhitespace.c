
#include "libft.h"

int ft_iswhitespace(char c){
	return (c == ' ' || c == '\t' || c =='\n' ||
		c == '\r' || c == '\v' || c == '\f');
}
