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
** usage: ft_isalpha(int c)
** it checks the input and returns 1 if its alphabetic letter;
**    otherwise, it returns a 0.
** asci1i values: 65 = A, 90 = Z; 97 = a, 122 = z
*/

int	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
	{
		return (1);
	}
	return (0);
}
