/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:15:42 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:15:43 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strhaschar(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
	{
		i++;
	}
	return (str[i] == c);
}

/*
usage:
**	it allocates and returns the trimmed string from s1, that which
characters from 'set' array, are removed from start and end of the 
's1' string.
 
input:
**	s1: the string to trim
**	set: the set of characters to find in s1.

output:
**	the trimmed string, from the 'set' characters. If the allocation 
fails, it returns NULL.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		diff;
	char	*trimmed_str;

	start = 0;
	diff = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	end = ft_strlen((char *)s1) - 1;
	while (ft_strhaschar(set, s1[start]))
		start++;
	if (start == (end + 1))
		return (NULL);
	while (ft_strhaschar(set, s1[end]))
		end--;
	diff = (end - start) + 1;
	trimmed_str = ft_substr(s1, start, diff);
	return (trimmed_str);
}
