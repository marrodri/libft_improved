/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:13:35 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:13:36 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// use memmove: str1 dest, str2 src, n-number of bytes to copy.
char	*ft_strdup(char *s)
{
	int		str_len;
	int		i;
	char	*duplicate_string;
	
	i = 0;
	str_len = ft_strlen(s);
	duplicate_string = (char *)ft_calloc(str_len + 1, sizeof(char));
	if (!duplicate_string)
	{
		return (NULL);
	}
	while (i < str_len)
	{
		duplicate_string[i] = s[i];
		i++;
	}
	return (duplicate_string);
}
