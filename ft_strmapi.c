/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:23 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:24 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
usage:
** it applies the function 'f' to each character from 's' string, and
its result is returned in a new allocated string.

input:
** s: th string on which to iterate
** f: the function to apply to each character

output: 
**	a newly created string, that is iterated from the s array, with 
the 'f' function. A NULL pointer is returned, if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		str_len;
	int		i;
	char	*str_map;

	if (!s || !f)
		return (NULL);
	str_len = ft_strlen((char *)s);
	i = 0;
	str_map = ft_calloc(str_len + 1, sizeof(char));
	if (!str_map)
		return (NULL);
	while (i < str_len)
	{
		str_map[i] = f(i, s[i]);
		i++;
	}
	return (str_map);
}
