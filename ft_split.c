
#include "libft.h"


int ft_strclen(const char* str, int c){
	int len = 0;
	while(str[len] != c && str[len]){
		len++;
	}
	return len;
}
int ft_wordcounter(const char *str, char c){
	int words = 0;
	int i = 0;
	if(str[i] == c){
		i++;
	}
	while(str[i]){
		if(str[i - 1] == c && str[i] != c){
			words++;
		}
		i++;
	}

	return words;
}

char **ft_split(char const *s, char c){
	int counted_words = 0;
	char **words;
	char *word;
	int str_i = 0;
	int words_j = 0;
	int word_len = 0;
	
	
	if(!s){
		return (NULL);
	}
	// first iterate by counting how many words there are, separated the c char
	counted_words = ft_wordcounter(s, c);
	if (counted_words == 0){
		return (NULL);
	}
	//then allocate the words + 1. with malloc
	words = (char**)malloc((counted_words + 1)*sizeof(char*));
	if(!words){
		return (NULL);
	}
	words[counted_words] = NULL;
	//then iterate the s, by finding the starting address of the word
	//and the length of the word to copy.
	while(s[str_i]){
		if (s[str_i] != c){
			//iterate the function here.
			// ft_strlcpy();
			//c='_'
			// '_hello_wor  _  l  d  _' 
			// '0123456789 10 11 12 13' 
			//i =1
			//word_len = 5
			
			word_len = ft_strclen(&s[str_i], c);
			word = (char*)malloc((word_len + 1)*sizeof(char));
			if(!word){
				return NULL;
			}
			word[word_len] = '\0';
			ft_memcpy(word, &s[str_i], word_len);
			words[words_j] = word;
			str_i += word_len;
			words_j++;
		}
		else{
			str_i++;
		}
	}
	return words;
}