/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:13:15 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:13:17 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


int ft_strclen(const char* str, int c){
	int len = 0;
	while(str[len] != c && str[len]){
		len++;
	}
	return len;
}
int ft_wordcounter(const char *s, char c){
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	if (s[0] != '\0')
		word++;
	return (word);
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
	//then allocate the words + 1. with malloc
	words = (char**)malloc((counted_words + 1)*sizeof(char*));
	if(!words)
		return (NULL);
	words[counted_words] = NULL;
	//then iterate the s, by finding the starting address of the word
	//and the length of the word to copy.
	while(s[str_i] && words_j < counted_words){
		//if the current index is not the character that separates
		//then set the new word
		if (s[str_i] != c){
			//iterate the function here.
			// ft_strlcpy();
			//c='_'
			// '_hello_wor  _  l  d  _' 
			// '0123456789 10 11 12 13' 
			//i =1
			//word_len = 5
			
			word_len = ft_strclen(&s[str_i], c);
			//create a new word.
			word = (char *)malloc((word_len + 1) * sizeof(char));
			if(!word)
				return NULL;
			word[word_len] = '\0';
			ft_memcpy(word, &s[str_i], word_len);
			//assign the newly created word.
			words[words_j] = word;
			//move to the next location of the big array.
			str_i += word_len;
			//go to the next word empty space.
			words_j++;
		}
		else{
			//keep iterating until a new word begins.
			str_i++;
		}
	}
	return (words);
}
