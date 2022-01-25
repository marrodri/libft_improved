/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:13:35 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:13:36 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
