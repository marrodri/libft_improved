/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:53:10 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:53:12 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
**	It checks the character 'c' if its an ASCII character or not.
ASCII values:  32 = " ", 126 = "~"
input:
**	c: the character to check

output: 
**	It returns 1 if the character 'c' is an ascii character, otherwise
returns 0.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
