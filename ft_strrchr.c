
#include "libft.h"


char *ft_strrchr(const char *s, int c){
	int strlen = ft_strlen((char*)s);
	int i = strlen - 1;
	if(!c){
		return (char *)(&s[strlen]); 
	}
	while(i > 0 && s[i] != c){
		i--;
	}
	if(s[i] == c){
		return (char *)(&s[i]);
	}
	return (NULL);

}