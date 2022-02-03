/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:57:02 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:57:03 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
usage:
**outputs the character 'c' to the given 'fd' file descriptor value. It can be 
used to ouput on the terminal, if the fd value is set to 1.

input:
**	c: the character to write 
**	fd: the selected file descriptor to write

output: 
**	 None.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
