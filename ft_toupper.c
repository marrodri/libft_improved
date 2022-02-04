/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:16:07 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:16:09 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
** If 'c' is a lowercase letter, it returns its uppercase equivalent.
** ascii values: 65 = A, 90 = Z; 97 = a, 122 = z

input:
** c: the lower case character to make it upper. 

output: 
** the upper case character, from the lower case character 'c'.
If the character is not an alphabetic character, 'c' is returned.
*/
int	ft_toupper(int c)
{
	if (ft_islower(c))
	{
		return (c - 32);
	}
	return (c);
}
