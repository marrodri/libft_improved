/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:13:56 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:13:57 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/*
** pre-str: preffix string 
** suf-str: suffix string
**	output: the new concattenated string
**
*/
char *ft_strjoin(char const *pre_str, char const *suf_str){
	char	*str_joined;
	int		i = 0;
	int		j = 0;
	int		pre_str_len;
	int		suf_str_len;
	int		str_join_len;
	
	if(!pre_str || !suf_str){
		return NULL;
	}
	pre_str_len = ft_strlen((char*)pre_str);
	suf_str_len = ft_strlen((char*)suf_str);
	str_join_len = pre_str_len + suf_str_len;
	str_joined = ft_calloc(str_join_len + 1, sizeof(char));
	if(!str_joined){
		return NULL;
	}
	//TODO
	//memove or memcopy should work!!!
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
