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

int	ft_numlen(int n)
{
	int	num_len;

	num_len = 0;
	if (n < 0)
	{
		num_len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		num_len++;
	}
	return (num_len);
}

char	*ft_itoa_exceptions(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		num_len;
	int		is_neg;
	char	*num_char;

	num_char = ft_itoa_exceptions(n);
	if (num_char)
		return (num_char);
	num_len = ft_numlen(n);
	num_char = ft_calloc((num_len + 1), sizeof(char));
	if (!num_char)
		return (NULL);
	is_neg = (n < 0);
	if (is_neg)
		n *= -1;
	while ((num_len - 1) > 0)
	{
		num_char[num_len - 1] = '0' + (n % 10);
		n /= 10;
		num_len--;
	}
	if (is_neg)
		num_char[0] = '-';
	else
		num_char[0] = n + '0';
	return (num_char);
}
