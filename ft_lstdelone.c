/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:54:47 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:54:48 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
usage:
**	

input:
**

output: 
**
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*top_head;

	top_head = lst;
	lst = lst->next;
	del(top_head->content);
	free(top_head);
	top_head = NULL;
}
