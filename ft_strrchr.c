/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:56 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:57 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
** it returns the address of the last occurrence of the
character c in the string s

input:
**s: the string to search
**c: the character to find

output: 
**returns an address to the matched character or NULL if 
the charcter is not found. The null byte, '\0', can also be founded
and return its address.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	strlen;
	int	i;

	strlen = ft_strlen((char *)s);
	i = strlen - 1;
	if (!c)
	{
		return ((char *)(&s[strlen]));
	}
	while ((i > 0 && s[i] != c))
	{
		i--;
	}
	if ((s[i] == c))
	{
		return ((char *)(&s[i]));
	}
	return (NULL);
}
