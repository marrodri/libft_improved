/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:55:46 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:55:47 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dest_arr;
	const unsigned char	*src_arr;
	unsigned char		unsigned_char;
	size_t				i;

	dest_arr = (unsigned char *)dest;
	src_arr = (const unsigned char *)src;
	unsigned_char = (unsigned char)c;
	i = 0;
	while (src_arr[i] != unsigned_char
		&& src_arr[i] && i < n)
	{
		dest_arr[i] = src_arr[i];
		i++;
	}
	if (src_arr[i] == unsigned_char)
	{
		dest_arr[i] = src_arr[i];
		return (&dest_arr[i + 1]);
	}
	return (NULL);
}
