/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:54:02 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:54:03 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_numlen(int n){
	int num_len = 0;
	if(n < 0){
		num_len++;
		 n*= -1;
	}
	while(n > 0){
		n /= 10;
		num_len++;
	}
	return (num_len);
}

char *ft_itoa(int n){
	int num_len = ft_numlen(n);
	int is_neg = 0;
	char *num_char;
	int tmp_num;
	// first get the len of the num;
	// then check if the number is negative, if it is
	// 		, make it positive, and increment the len of the array.
	if(n == 0){
		return ft_strdup("0");
	}
	if(n == 2147483647){
		return ft_strdup("2147483647");
	}
	if(n == -2147483648){
		return ft_strdup("-2147483648");
	}
	num_char = (char*)malloc((num_len + 1)*sizeof(char));
	if(!num_char){
		return NULL;
	}
	num_char[num_len] = '\0';
	if(n < 0){
		n *= -1;
		num_char[0] = '-';
		is_neg = 1;
	}
	num_len--;
	while(num_len > 0){
		tmp_num = n % 10;
		num_char[num_len] = '0' + tmp_num;
		n /= 10;
		num_len--;
	}
	if(is_neg){
		num_char[0] = '-';	
	}
	else{
		num_char[0] = n + '0';
	}
	return (num_char);
}
