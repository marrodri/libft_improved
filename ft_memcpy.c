/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:56:30 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:56:32 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*unsigned_dest;
	unsigned char	*unsigned_src;

	unsigned_dest = (unsigned char *)dest;
	unsigned_src = (unsigned char *)src;
	i = 0;
	if (!unsigned_dest && !unsigned_src)
	{
		return (NULL);
	}
	while (i < n)
	{
		unsigned_dest[i] = unsigned_src[i];
		i++;
	}
	return (unsigned_dest);
}
