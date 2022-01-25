/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:56:54 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:56:55 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"


void ft_printlst(t_list *lst){
	int i = 0;
	while(lst){
		printf("Node i=%d, content:|%s|",(char*)lst->content);
		i++;
		lst = lst->next;
	}
}
