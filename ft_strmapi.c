/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:23 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:24 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){

	
	if(!s|| !f){
		return NULL;
	}
	int str_len = ft_strlen((char *)s);
	int i = 0;
	char *str_map = ft_calloc(str_len + 1, sizeof(char));
	if(!str_map){
		return NULL;
	}
	while(i < str_len){
		str_map[i] = f(i,s[i]);
		i++;
	}
	return (str_map);
}
