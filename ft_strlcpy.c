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

#include "libft.h"
/*
usage:
** It copies the string 'src' and writes on the 'dst' string.
It takes the full size of the buffer and the result is NUL-terminated.
(As long as 'size' is larger than 0) A byte for the NUL should be 
included in 'size'

input:
**	dest: the memory area to write
**	src: the memory area to copy from
**	size: the number of bytes to copy, including the byte for NULL.

output:
**	It returns the total length of 'src' string, that tried to copy.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen((char *)src);
	i = 0;
	if (size <= 0)
	{
		return (src_len);
	}
	while (i < (size - 1) && src[i])
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
