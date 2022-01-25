/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:14:17 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 20:14:18 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/*
** ft_strlen
** input: allocated string
** output: it returns the total length of a string. 
*/

int ft_strlen(char *str){
	int str_len;

	str_len = 0;

	while(str[str_len]){
		str_len++;
	}
	return str_len;
}
