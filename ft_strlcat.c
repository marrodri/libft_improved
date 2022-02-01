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

#include "libft.h"
/*
usage:
**	it will concatenate strings, and return its total length of the 
concatenated string. It takes the fll size of the buffer(dst), and
null-terminate the result; as long as size is larger than 0 or the 
size of dst array. it will copy up to size - 1 characters from src
to dst.

input:
**	dst: the allocated array where it concatenates the src array.
**	src: the allocated array that it will concatenate the dst array.
**	size: the size of the concatenation.

output: 
** 	it will return the total length of dst array and src array.
If the size is less than the size of dst array, it will return 
the size with the length of the src array.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (size == 0 || size < dst_len)
		return (src_len + size);
	size = size - dst_len;
	while (size > 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
		size--;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
