/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striswhitespace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:13:48 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:13:49 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_striswhitespace(char *str){
	int i = 0;
	if(!str){
		return (1);
	}
	while(ft_iswhitespace(str[i])){
		i++;
	}
	return (!str[i]) ? 1 : 0;
}
