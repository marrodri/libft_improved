
#include "libft.h"

// ascii val '0'=48, '9'=57
int ft_atoi(const char *nptr){
	// the atoi function converts the string to int.
	//first gets the length of the str.

	// then it will iterate the str one by one, starting
	//from the end char to start
	// each character converted to int, it will be multiplied
	// by 10 and summed with the total value.
	// '1234'

	int nptr_numlen = 0;
	int nptr_int = 0;
	int tmp_int = 0;
	int pow_ten = 1;
	int i = 0;
	//move ahead, any whitespace
	while(nptr[i] == ' ' || nptr[i] == '\t'){
		i++;
		nptr_numlen++;
	}
	while(nptr[nptr_numlen] >= '0' && nptr[nptr_numlen] <='9'){
		nptr_numlen++;
	}
	while((nptr_numlen - 1) >= i){
		// converting to int
		tmp_int = nptr[nptr_numlen] - '0';
		// multiplying by ten
		tmp_int *= pow_ten;
		// adding to the nptr_numlen conversion
		nptr_numlen += tmp_int;
		//multiplying the pow_ten by 10
		pow_ten *= 10;
		//decrease to the next char.
		nptr_numlen--;
	}
	return (nptr_int);


}