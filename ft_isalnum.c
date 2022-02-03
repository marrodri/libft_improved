/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:52:28 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:52:30 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
** it checks the input 'c' and returns 1 if its alphabetic letter or number;
otherwise, it returns a 0.
** 

input:
** c: the character to check

output: 
** returns 1 if the character is an alphabetic character or number; otherwise,
returns 0.
*/
int	ft_isalnum(int c)
{
	return ((ft_isdigit(c)) || (ft_isalpha(c)));
}
