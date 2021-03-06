/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:51:41 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:51:55 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	asciinumlen(char *asciinum)
{
	int	nptr_numlen;

	nptr_numlen = 0;
	while (asciinum[nptr_numlen] >= '0' && asciinum[nptr_numlen] <= '9'
		&& asciinum[nptr_numlen])
		nptr_numlen++;
	return (nptr_numlen);
}

int	movingwhitespace(char *asciinum)
{
	int	i;

	i = 0;
	while (ft_iswhitespace(asciinum[i]))
	{
		i++;
	}
	return (i);
}

int	asciitointconverter(char *nptr, int nptr_numlen, int pow_ten, int i)
{
	int	nptr_int;

	nptr_int = 0;
	while ((nptr_numlen - 1) >= i)
	{
		nptr_int += (nptr[nptr_numlen - 1] - '0') * pow_ten;
		pow_ten *= 10;
		nptr_numlen--;
	}
	return (nptr_int);
}

/*
usage:
** It converts the passed array to a new integer.
It will skip any space founded at the beggining and
it will stop when any other non-numeric character is founded.

input:
**	nptr: the string to convert to integer number.

output: 
**	the converted integer from the string.
*/
int	ft_atoi(const char *nptr)
{
	int	nptr_numlen;
	int	nptr_int;
	int	pow_ten;
	int	i;
	int	is_neg;

	nptr_int = 0;
	pow_ten = 1;
	is_neg = 0;
	i = movingwhitespace((char *)&nptr[0]);
	nptr_numlen = i;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		is_neg = (nptr[i] == '-');
		i++;
		nptr_numlen++;
	}
	nptr_numlen += asciinumlen((char *)&nptr[nptr_numlen]);
	nptr_int = asciitointconverter((char *)nptr, nptr_numlen, pow_ten, i);
	if (is_neg)
		nptr_int *= -1;
	return (nptr_int);
}
