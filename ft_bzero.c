/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:52:07 by marrodri          #+#    #+#             */
/*   Updated: 2022/01/24 19:52:11 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_bzero will set the data array to 0, starting from
** the pointed memory address to the defined length of the memory
** to delete.
*/
void *ft_bzero(void *s, size_t n){
	return ft_memset(s, '\0', n);
}
