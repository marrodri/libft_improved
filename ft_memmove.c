/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:56:40 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:56:41 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_arr;
	const unsigned char	*src_arr;

	dest_arr = (unsigned char *)dest;
	src_arr = (const unsigned char *)src;
	if (!dest && !src)
	{
		return (NULL);
	}
	if (src_arr < dest_arr)
	{
		while (n--)
		{
			*(dest_arr + n) = *(src_arr + n);
		}
	}
	else
	{
		while (n--)
		{
			*dest_arr++ = *src_arr++;
		}
	}	
	return (dest);
}
