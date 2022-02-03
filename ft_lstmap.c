/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:55:10 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:55:12 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
**	iterates the list 'lst' and applies the function 'f' to each node's
element; and the result is copied in a new list, which is returned.
the 'del' function is used to delte the content of an element if needed.

input:
**	lst: the address of a list
**	f: the function to apply to the content of a node.
**	del: the function to delete the content of a node, when needed.

output: 
**	Returns a copy of the iterated list, with the applied function 'f' to 
each node. If the allocation fails, a NULL pointer is returned.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_mapped_lst;
	t_list	*new_node;
	void	*new_cont;

	new_mapped_lst = NULL;
	while (lst)
	{
		if (del)
			del(lst->content);
		if (lst->content)
		{
			new_cont = f(lst->content);
			new_node = ft_lstnew(new_cont);
			if (!new_mapped_lst)
				new_mapped_lst = new_node;
			else
				ft_lstadd_back(&new_mapped_lst, new_node);
		}
		lst = lst->next;
	}
	if (!new_mapped_lst)
		return (NULL);
	return (new_mapped_lst);
}
