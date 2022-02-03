/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:52:39 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:52:41 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
**	it checks the input 'c' and returns 1 if its alphabetic letter,
whether its uppercase or lower case;
otherwise, it returns a 0.
--ASCII values: 65 = A, 90 = Z; 97 = a, 122 = z

input:
**	c: the character to check

output:
**	returns 1 if the value is an alphabetic character, otherwise 0 if
its any other character.
*/
int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
	{
		return (1);
	}
	return (0);
}
