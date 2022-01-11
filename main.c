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
	size_t len;
	printf("Hello World\n");

	char *test = "Hello World";
	char *substr = ft_substr(test, 1, 4);
	printf("final output: |%s|", substr);
	return 0;
}
