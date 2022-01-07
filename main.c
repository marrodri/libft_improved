#include "stdio.h"
#include "libft.h"


/*
** current functions status
** islapha
** isdigit
** isascii
** isprint
** strlen
*/


int main(){
	size_t test;
	printf("Hello World\n");



	int strLen = ft_strlen("sstr");
	printf("0 is: %d\n", strLen);
	strLen = ft_strlen((void*)0);
	printf("null is: %d\n", strLen);
	return 0;
}
