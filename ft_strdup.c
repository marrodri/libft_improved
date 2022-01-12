
#include "libft.h"

char *ft_strdup(char *s){

	int		str_len = ft_strlen(s);
	int		i = 0;
	char	*duplicate_string;
	//allocate the memory.
	duplicate_string = (char*)ft_calloc(str_len + 1, sizeof(char));
	if(!duplicate_string){
		return NULL;
	}
	//TODO future: 
	// use memmove: str1 dest, str2 src, n-number of bytes to copy.
	while(i < str_len)
	{
		duplicate_string[i] = s[i];
		i++;
	}
	return (duplicate_string);
}