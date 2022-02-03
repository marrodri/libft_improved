/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:54:13 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:54:15 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
usage:
** it add the 'new' node at the end of the list.

input:
** lst: the address of the list
** new: the node to add at the end of the list.

output: 
** None.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (!*lst && new)
		*lst = new;
	else
	{
		if (!*lst || !new)
			return ;
		head = **(&lst);
		while ((*lst)->next)
			(*lst) = (*lst)->next;
		(*lst)->next = new;
		*lst = head;
	}
}
