/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:54:39 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:54:40 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
**	it deletes and frees the whole list and it's content of each node,
with the passed function 'del'. the list and content is set to NULL
after deletion. 

input:
**	lst: the list to clear.
**	del: the address of the function used to delete the content.

output: 
**	None.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_node;

	while ((*lst))
	{
		tmp_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp_node;
	}
	*lst = NULL;
}
