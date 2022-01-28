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

/*
** ascii val '0'=48, '9'=57
**	// the atoi function converts the string to int.
**	//first gets the length of the str.

**	// then it will iterate the str one by one, starting
**	//from the end char to start
**	// each character converted to int, it will be multiplied
**	// by 10 and summed with the total value.
**	// '1234'
*/

int	ft_atoi(const char *nptr)
{
	int	nptr_numlen;
	int	nptr_int;
	int	tmp_int;
	int	pow_ten;
	int	i;
	int	is_neg;

	nptr_numlen = 0;
	nptr_int = 0;
	tmp_int = 0;
	pow_ten = 1;
	i = 0;
	is_neg = 0;
	while (ft_iswhitespace(nptr[i]))
	{
		i++;
		nptr_numlen++;
	}
	if (nptr[i] == '-')
	{
		is_neg = 1;
		i++;
		nptr_numlen++;
	}
	else if (nptr[i] == '+')
	{
		i++;
		nptr_numlen++;
	}
	while (nptr[nptr_numlen] >= '0' && nptr[nptr_numlen] <= '9'
		&& nptr[nptr_numlen])
	{
		nptr_numlen++;
	}
	nptr_numlen--;
	while ((nptr_numlen) >= i)
	{
		tmp_int = nptr[nptr_numlen] - '0';
		tmp_int *= pow_ten;
		nptr_int += tmp_int;
		pow_ten *= 10;
		nptr_numlen--;
	}
	if (is_neg)
	{
		nptr_int *= -1;
	}
	return (nptr_int);
}
