/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:53:37 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:53:38 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
**	It checks the character 'c' if it can be printed or not.

input:
**	c: the character to check

output: 
**	It returns 1 if the character 'c' is a printable character, otherwise
returns 0.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
