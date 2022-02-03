/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:12:59 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:13:01 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
usage:
** it writes the string 's' to the given file descriptor 'fd'. It can
be used to output on the terminal, if the fd value is set to 1.

input:
**	s: the string to write
**	fd: the selected file descriptor value to write

output: 
**	 None.
*/
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
	{
		return ;
	}
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return ;
}
