/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:35 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:36 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
	size_t i = 0;
	if(n == 0){
		return (0);
	}
	//  && (s1[i] == s2[i]) && s1[i] && s2[i]){
	while((i < n -1) && s1[i] && s2[i] && s1[i] == s2[i]){
		
		// if(s1[i] != s2[i]){
		// 	return ;
		// }
		i++;
	}
	return (unsigned char)s1[i] - (unsigned char)s2[i];
}
