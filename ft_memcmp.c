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

	// TODO (fix later the memcmp), for this function, check the testing and
	// bring a notebook to fix this issue later by hand.
	//why the previous version doesnt work? 
	//it could be that the n input is an out of bounds number
	//check the test of the previous version.

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
