/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:55:53 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:56:01 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*unsigned_str;
	unsigned char	unsigned_char;
	size_t			i;

	i = 0;
	unsigned_str = (unsigned char *)s;
	unsigned_char = (unsigned char)c;
	while (i < n && unsigned_str[i]
		&& unsigned_str[i] != unsigned_char)
	{
		i++;
	}
	if (unsigned_str[i] == unsigned_char)
	{
		return (&unsigned_str[i]);
	}
	return (NULL);
}
