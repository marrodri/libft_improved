/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:52:18 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:52:20 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
input:
**	n_items: the number of items to allocate
**	size: the size of each item that will use.

output: 
**	the allocated array from the defined
	n_items * size. The array is initialized
	to null
*/
void	*ft_calloc(size_t n_items, size_t size)
{
	char	*alloc_mem;
	size_t	i;
	size_t	total_size;

	i = 0;
	total_size = n_items * size;
	alloc_mem = (char *)malloc(total_size * (sizeof(char)));
	if (!alloc_mem)
	{
		return (NULL);
	}
	while (i < total_size)
	{
		alloc_mem[i] = '\0';
		i++;
	}
	return (alloc_mem);
}


