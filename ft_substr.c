/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:15:49 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:15:50 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char *substr;
	
	if (!s) {
		return (NULL);
	}
	if (start >= (unsigned int)ft_strlen((char*)s)){
		return (ft_strdup(""));
	}

	//this should be a function, this is calloc
	// substr = (char *)malloc((len + 1) * sizeof(char));
	substr = ft_calloc((len + 1), sizeof(char));
	if (!substr) {
		return NULL;
	}
	while(i < len){
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}



