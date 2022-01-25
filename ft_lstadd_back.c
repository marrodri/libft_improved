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

// seems to work
void ft_lstadd_back(t_list **lst, t_list *new){
	if(!*lst && new){
		*lst = new;
	}
	else{
		// lstlast
		if(!*lst || !new){
			return ;
		}
		t_list *head = **(&lst);
		while((*lst)->next){
			(*lst) = (*lst)->next;
		}
		(*lst)->next = new;
		*lst = head;
	}
}



