/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:13:25 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:13:26 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
** it returns the address of the first occurrence of the
character c in the string s

input:
**s: the string to search
**c: the character to find

output: 
**returns an address to the matched character or NULL if 
the charcter is not found. The null byte, '\0', can also be founded
and return its address. 
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	if (s[i] == c)
	{
		return ((char *)(&s[i]));
	}
	return (NULL);
}
