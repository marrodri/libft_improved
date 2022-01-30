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
