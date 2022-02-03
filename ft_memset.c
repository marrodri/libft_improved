/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:56:46 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:56:47 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** it fills the data to the str with the c val, 
** under a n of times.
*/

/*
usage:
** It fills the first 'n' bytes of the memory area pointed to by 's'
with the constant byte c.

input:
** s: memory area.
** c: constant byte value to fill.
** n: length of the memory to fill.

output: 
** it returns a pointer, that which points to the initial memory area 's'. 

*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*unsigned_str;
	unsigned char	unsigned_char;

	i = 0;
	unsigned_str = (unsigned char *)s;
	unsigned_char = (unsigned char)c;
	while (i < n)
	{
		unsigned_str[i] = unsigned_char;
		i++;
	}
	return (unsigned_str);
}
