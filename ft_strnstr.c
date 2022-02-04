/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:46 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:47 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
**	It locates the first occurrence of the null-terminated string 'little'
in the string 'big', where not more than 'len' characters are searched.
Characters that appear after a '\0' are not searched.

input:
**	big: The string to scan.
**	litte: The string to find in the 'big' string.
**	len: the length of the search area.

output: 
** If little is an empty string, 'big' is returned; if 'little' occurs
nowhen in 'big', NULL is returned; otherwise a pointer to the first 
character of the first occurrence of 'little' is returned.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	is_founded;
	size_t	big_i;
	size_t	little_i;
	size_t	little_len;

	big_i = 0;
	little_i = 0;
	little_len = ft_strlen((char *)little);
	is_founded = 0;
	if (ft_striswhitespace((char *)little))
		return ((char *)big);
	while (big_i < len && big[big_i]
		&& !is_founded)
	{
		if (little[little_i] == big[big_i])
			little_i++;
		else
			little_i = 0;
		is_founded = (little_len == little_i);
		big_i++;
	}
	if (is_founded)
		return ((char *)(&big[big_i - little_len]));
	return (NULL);
}
