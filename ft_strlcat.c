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
