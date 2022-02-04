/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:56:22 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:56:23 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
**	it compares the first 'n' bytes, (each interpreted as unsigned char)
of the memory areas 's1' and 's2'.

input:
**	s1: memory area 1
**	s2: memory area 2
**	n: the length of the area to compare.

output: 
**	It returns an integer less than, equal to, or greater than zero, if the
first n bytes of s1 is found to be less than, to match, or be greater than
the first 'n' bytes of 's2'.
**	For a nonzero return value, the sign is determined by the sign of the 
difference between the firt pair of bytes that differ is s1 and s2.
**	If 'n' is zero, the return value is zero.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_unsigned;
	unsigned char	*s2_unsigned;
	size_t			i;

	s1_unsigned = (unsigned char *)s1;
	s2_unsigned = (unsigned char *)s2;
	i = 0;
	while ((i < n))
	{
		if (s1_unsigned[i] != s2_unsigned[i])
		{
			return (s1_unsigned[i] - s2_unsigned[i]);
		}
		i++;
	}
	return (0);
}
