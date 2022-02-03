/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:54:54 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:54:55 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
** It iterates the list 'lst' and applies the function 'f' to
each  node's content.

input:
**	lst: the address of a list
**	f: the address of a function used to iterate the list.

output: 
**	None
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*head;

	head = lst;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	lst = head;
}
