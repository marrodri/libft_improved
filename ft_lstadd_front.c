/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:54:20 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:54:21 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//add the new list, to the front of the lst.

/*
usage:
** It adds a the node 'new' to the list 'lst' to the 
front list, and is pointed as the new first node of the
list

input:
**	: the list that points to the first node of the list.
**	: the new node to add in the list.

output: 
**	 None.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		new->next = *lst;
		*lst = new;
	}
}
