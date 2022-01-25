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

void ft_lstadd_front(t_list **lst, t_list *new){
	//add the new list, to the front of the lst.
	if(lst){

		new->next = *lst;
		*lst = new;
	}
}
