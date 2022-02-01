/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striswhitespace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:13:48 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:13:49 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
usage:
**

input:
**

output: 
**
*/
int	ft_striswhitespace(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (1);
	while (ft_iswhitespace(str[i]))
		i++;
	if ((!str[i]))
		return (1);
	return (0);
}
