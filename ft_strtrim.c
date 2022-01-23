

#include "libft.h"

int ft_strhaschar(const char *str, char c){
	int i = 0;
	while(str[i] != c && str[i]){
		i++;
	}

	return (str[i] == c);
}

char *ft_strtrim(char const *s1, char const *set){
	int i = 0;
	int len;
	int diff = 0;
	char *trimmed_str;

	if(!s1){
		return NULL;
	}
	
	len = ft_strlen((char*)s1) - 1;
	//check at what point do we need to trim
	// from the beggining of the string.
	while(ft_strhaschar(set, s1[i])){
		i++;
	}
	//check at what point do we need to trim at the end
	//of the string.
	while(ft_strhaschar(set, s1[len])){
		len--;
	}
	// 'he llo wor l d'
	//  01 2345678 9 10
	// i = 2
	//len = 8
	//diff
	diff  = (len - i) + 1;
	//--get the diff and allocate a new string
	//with the defined trimmed area.
	// trimmed_str = (char*)malloc((diff + 1) *sizeof(char));
	trimmed_str = ft_calloc(diff+1, sizeof(char));
	if(!trimmed_str){
		return NULL;
	}
	trimmed_str[diff] = '\0';
	//copy the data from one point till the end.
	//strlcopy, memcpy.
	// ft_memcpy(trimmed_str,s1[i], diff + 1);
	ft_memcpy(trimmed_str,&s1[i], diff);

	return (trimmed_str);
}