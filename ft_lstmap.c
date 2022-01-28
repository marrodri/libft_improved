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

t_list	*ft_lstmap(t_list  *lst,
		void *(*f)(void *), void (*del)(void*))
{
	t_list	*new_mapped_lst = NULL;
	t_list	*new_node;
	void	*new_cont;

	while (lst)
	{
		if (del)
		{
			del(lst->content);
		}
		if (lst->content)
		{
			new_cont = f(lst->content);
			new_node = ft_lstnew(new_cont);
			if (!new_mapped_lst)
			{
				new_mapped_lst = new_node;
			}
			else
			{
				ft_lstadd_back(&new_mapped_lst, new_node);
			}
		}
		lst = lst->next;
	}
	if (!new_mapped_lst)
	{
		return (NULL);
	}
	return (new_mapped_lst);
}
