/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:03 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:04 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// build ft_strlcat.c

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size){

	// cat form: dst + src.
	size_t dst_len = ft_strlen(dst);
	size_t src_len = ft_strlen((char*)src);
	size_t i = 0;
	// size_t dst_i = dst_len;

	// size + dst_len - 1 byte(ignore the null byte).
	if (size <= 0 || size < dst_len) {
		// return 0;
		return(src_len + size);
	}
	// dst[dst_len + size] = '\0';
	size = dst_len - size - 1;
	while (size > 1  && src[i]) {
		// concatenating dst
		dst[dst_len + i] =  src[i];
		i++;
		size--;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);



	// // code test, this one is right.

	// 	size_t total;
	// size_t original;

	// original = size;
	// total = ft_strlen(dst) + ft_strlen((char*)src);
	// while (*dst != '\0' && 0 < size)
	// {
	// 	dst++;
	// 	size--;
	// }
	// if (size == 0)
	// 	return (ft_strlen((char*)src) + original);
	// while (size > 1 && *src != '\0')
	// {
	// 	*dst = *src;
	// 	dst++;
	// 	src++;
	// 	size--;
	// }
	// *dst = '\0';
	// return (total);
}
