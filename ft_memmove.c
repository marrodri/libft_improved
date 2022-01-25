/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:56:40 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:56:41 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// build ft_memmove.c

// #include"string.h"
#include"libft.h"
// TODO work on this function later
void *ft_memmove(void *dest, const void *src, size_t n){
	if(!dest && !src){
		return NULL;
	}
	unsigned char *dest_arr = (unsigned char*)dest;
	const unsigned char *src_arr = (const unsigned char *)src;
	
	//if the address of the src_arr is lower than the 
	//dest_arr address, then move back the address 
	// from the end of both arrays.

	if(src_arr < dest_arr){
		while(n--){
			*(dest_arr + n) = *(src_arr + n);
		}
	}
	else{
		// just move foward the address.
		while(n--){
			*dest_arr++ = *src_arr++;
		}
	}	
	return (dest);
}
