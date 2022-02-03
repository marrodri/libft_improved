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

int	ft_strchrlen(const char *str, int c)
{
	int	len;

	len = 0;
	while (str[len] != c && str[len])
		len++;
	return (len);
}

int	ft_wordcounter(const char *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (s == NULL)
		return (0);
	if (s[0] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			word++;
		i++;
	}
	if (word == 0)
		return (1);
	return (word);
}

char	*ft_setword(char *s, int word_len, int str_i)
{
	char	*word;

	word = ft_calloc((word_len + 1), sizeof(char));
	ft_memcpy(word, &s[str_i], word_len);
	return (word);
}

/*
usage:
** it allocates and creates an array of words from the passed 
array 's', that which is delimited by the character 'c'.

input:
** s: the array to split 
** c: the delimiter character. 

output: 
** it returns a double pointer array, where it has the splitted s,
into an array of strings. It returns a NULL pointer if the
allocation fails.
*/
char	**ft_split(char const *s, char c)
{
	int		counted_words;
	char	**words;
	int		str_i;
	int		words_j;
	int		word_len;

	str_i = 0;
	words_j = 0;
	if (!s)
		return (NULL);
	counted_words = ft_wordcounter(s, c);
	words = ft_calloc(counted_words + 1, sizeof(char *));
	while (s[str_i] && words_j < counted_words && words)
	{
		if (s[str_i] != c)
		{
			word_len = ft_strchrlen(&s[str_i], c);
			words[words_j] = ft_setword((char *)s, word_len, str_i);
			str_i += word_len;
			words_j++;
		}
		else
			str_i++;
	}
	return (words);
}
