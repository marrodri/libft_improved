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


void ft_lstclear(t_list **lst, void (*del)(void *)){
	t_list *tmp_node; //  = (*lst)->next;

	while((*lst)){
		//first store the next node.
		tmp_node = (*lst)->next;
		//then clear the content of the top head node.
		//free the top head node
		ft_lstdelone(*lst, del);
		
		//and then move to the next node from the stored list
		*lst = tmp_node; 
	}
	*lst = NULL;
}
