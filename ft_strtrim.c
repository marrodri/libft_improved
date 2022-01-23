
#include "libft.h"

int ft_strhaschar(const char *str, char c){
	int i = 0;
	while(str[i] != c && str[i]){
		i++;
	}

	return (str[i] == c);
}

char *ft_strtrim(char const *s1, char const *set){
	int start = 0;
	int end;
	int diff = 0;
	char *trimmed_str;

	if(!s1){
		return NULL;
	}
	if(!set){
		return (ft_strdup((char*)s1));
	}
	end = ft_strlen((char*)s1) - 1;
	while(ft_strhaschar(set, s1[start])){
		start++;
	}
	if(start == (end+1)){
		return (NULL);
	}
	while(ft_strhaschar(set, s1[end])){
		end--;
	}
	diff  = (end - start) + 1;
	trimmed_str = ft_calloc(diff+1, sizeof(char));
	if(!trimmed_str){
		return NULL;
	}
	trimmed_str[diff] = '\0';
	ft_memcpy(trimmed_str,&s1[start], diff);

	return (trimmed_str);
}