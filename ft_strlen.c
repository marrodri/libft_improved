/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:17 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:18 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
usage:
**	It checks the total length of characters of a string 'str' and
returns it's value. The function will stop when a NULL byte is encountered,
even if there are characters after the NULL byte.

input:
**	str: allocated string

output: 
**	It returns the total length of the string, excluding the NULL byte.

*/
int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len])
	{
		str_len++;
	}
	return (str_len);
}
