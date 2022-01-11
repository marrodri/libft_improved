#include "libft.h"

/*
** input:
**	--s: the string that will create the substring
** 	--start: the starting index of the string, that will create the substring 
**	--len: the maximum length of the substring.
** output: it returns a substring if the allocation is successful.
		if not, then it returns NULL.
*/

char *ft_substr(char const *s, unsigned int start, size_t len){
	unsigned int i = 0;
	unsigned int str_len = ft_strlen((char*)s);
	char *substr;
	if(!s || str_len <= start){
		return (NULL);
	}

	//this should be a function, this is calloc
	substr = (char *)malloc((len + 1) * sizeof(char));
	if(!substr){
		return NULL;
	}
	substr[len] = '\0';

	while(i < len){
		substr[i] = s[start];
		i++;
		start++;
	}
	return substr;
}



