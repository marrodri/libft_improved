
#include "libft.h"

/*
** pre-str: preffix string 
** suf-str: suffix string
**	output: the new concattenated string
**
*/
char *ft_strjoin(char const *pre_str, char const *suf_str){
	int		pre_str_len = ft_strlen((char*)pre_str);
	int		suf_str_len = ft_strlen((char*)suf_str);
	int		str_join_len = pre_str_len + suf_str_len;
	char	*str_joined;
	int i = 0;
	int j = 0;
	if(!pre_str || !suf_str){
		return NULL;
	}
	str_joined = ft_calloc(str_join_len + 1, sizeof(char));
	if(!str_joined){
		return NULL;
	}
	//TODO make a function for these 2 while loops.
	while(pre_str[j]){
		str_joined[i] = pre_str[j];
		i++;
		j++;
	}
	j = 0;
	while(suf_str[j]){
		str_joined[i] = suf_str[j];
		i++;
		j++;

	}
	return str_joined;
}