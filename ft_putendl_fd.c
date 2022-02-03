/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:11:27 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:11:28 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
usage:
** it writes the string 's', to the given file descriptor, followed
by a newline. It can write on the console, if the fd value is set to 1.

input:
**	s: the string to write.
**	fd: the file descriptor on which to write.

output: 
**	 None.
*/
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
