/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:12:59 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:13:01 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putstr_fd(char *s, int fd){
	int i;
	
	i = 0;
	if(!s){
		return ;
	}
	while(s[i]){
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return ;
}
