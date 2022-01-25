/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:11 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:12 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// build ft_strlcpy.c
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size){
	// return the length of src.
	size_t src_len = ft_strlen((char*)src);
	size_t i = 0;

	if(size <= 0){
		return (src_len);
	}
	while(i < (size - 1) && src[i]){
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';

	return (src_len);
}
