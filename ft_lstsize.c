/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:55:26 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:55:27 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
**	It counts the number of nodes in a list.

input:
**	lst: the list t_list

output: 
**	 the length of the list.
*/
int	ft_lstsize(t_list *lst)
{
	int		lst_len;
	t_list	*curr_lst;

	lst_len = 0;
	if (!lst)
		return (0);
	curr_lst = lst;
	while (curr_lst)
	{
		lst_len++;
		curr_lst = curr_lst->next;
	}
	return (lst_len);
}
