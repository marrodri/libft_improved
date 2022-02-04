/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:56:40 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:56:41 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
usage:
** It copies 'n' bytes from emory area 'src' to memory area 'dest'.
The memory area may overlap. (Copying takes place as though the bytes in
'src' are first copied into a temp array, that doesn't overlap 'src' or 'dest';
then the bytes are copied from the temp array to 'dest'.)

input:
**	dest: the memory area to write
**	src: the memory area to copy from
**	n: the number of bytes to copy.

output:
** It returns the initial pointer of the 'dest' memory area.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_arr;
	const unsigned char	*src_arr;

	dest_arr = (unsigned char *)dest;
	src_arr = (const unsigned char *)src;
	if (!dest && !src)
	{
		return (NULL);
	}
	if (src_arr < dest_arr)
	{
		while (n--)
		{
			*(dest_arr + n) = *(src_arr + n);
		}
	}
	else
	{
		while (n--)
		{
			*dest_arr++ = *src_arr++;
		}
	}	
	return (dest);
}
