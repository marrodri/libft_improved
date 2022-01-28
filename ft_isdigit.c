/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:53:20 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:53:22 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** usage: ft_isdigit(int c)
** it checks the input and returns 1 if the character is a number;
**    otherwise, it returns a 0.
** ascii values: 48 = '0', 57 = '9'
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
