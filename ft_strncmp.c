/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:35 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:36 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
usage:
** it compares both strings 's1' and 's2', only the first 'n' bytes of both
strings. It returns an integer less than, equal to, or greater than zero
if 's1' (or the first 'n' bytes) is found to be less than, to match, or
be greater than 's2', starting at the first character comparison 
to be different

input:
**	s1: string 1 to compare
**	s2: string 2 to compare
**	n: the length of the comparison

output: 
** the comparison value of the first encounter of the 2 strings.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((i < n -1) && s1[i]
		&& s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
