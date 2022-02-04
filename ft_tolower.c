/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:15:57 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:15:58 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
usage:
** If 'c' is a uppercase letter, it returns its lowercase equivalent.
** ascii values: 65 = A, 90 = Z; 97 = a, 122 = z

input:
** c: the upper case letter. 

output: 
** the lower case character, from the upper case character 'c'.
If the character is not an alphabetic character, 'c' is returned.
*/
int	ft_tolower(int c)
{
	if (ft_isupper(c))
	{
		return (c + 32);
	}
	return (c);
}
