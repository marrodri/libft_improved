/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:13:56 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:13:57 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
**	it allocates and returns a new concatenated string, from
the passed arrays, 'pre_str' and 'suf_str' 

input:
**	pre_str: prefix string array
**	suf_str: suffix string array

output:
**	It returns a the concatenated string. If the allocation fails,
a NULL pointer is returned.

*/
char	*ft_strjoin(char const *pre_str, char const *suf_str)
{
	char	*str_joined;
	int		pre_str_len;
	int		suf_str_len;
	int		str_join_len;

	if (!pre_str || !suf_str)
		return (NULL);
	pre_str_len = ft_strlen((char *)pre_str);
	suf_str_len = ft_strlen((char *)suf_str);
	str_join_len = pre_str_len + suf_str_len;
	str_joined = ft_calloc(str_join_len + 1, sizeof(char));
	if (!str_joined)
		return (NULL);
	ft_memcpy(str_joined, pre_str, pre_str_len);
	ft_memcpy(&str_joined[pre_str_len], suf_str, suf_str_len);
	return (str_joined);
}
