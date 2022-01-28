/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:46 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:47 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	is_founded;
	size_t	big_i;
	size_t	little_i;
	size_t	little_len;
	size_t	strnstr_index;

	big_i = 0;
	little_i = 0;
	little_len = ft_strlen((char *)little);
	is_founded = 0;
	strnstr_index = 0;
	if (ft_striswhitespace((char *)little))
	{
		return ((char *)big);
	}
	while (big_i < len && big[big_i]
		&& !is_founded)
	{
		if (little[little_i] == big[big_i])
		{
			little_i++;
		}
		else
		{
			little_i = 0;
		}
		if (little_len == little_i)
		{
			is_founded = 1;
		}	
		big_i++;
	}
	if (is_founded)
	{
		strnstr_index = big_i - little_len;
		return ((char *)(&big[strnstr_index]));
	}
	return (NULL);
}
