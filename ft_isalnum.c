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
** usage: ft_isalnum(int c)
** it checks the input and returns 1 if its alphabetic letter;
**    otherwise, it returns a 0.
** ascii values: 65 = A, 90 = Z; 97 = a, 122 = z
*/
int ft_isalnum(int c){
	return ((ft_isdigit(c)) || (ft_isalpha(c)));
}
