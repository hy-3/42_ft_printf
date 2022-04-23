/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned_int.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:23:02 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/23 11:23:03 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoa_unsigned_int(unsigned int n)
{
	int		digit;
	char	*res;

	digit = count_digits_unsigned_int(n);
	res = (char *) malloc((digit + 1) * sizeof(char));
	if (res == NULL)
		return (0);
	res[digit--] = '\0';
	if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		res[digit--] = n % 10 + '0';
		n /= 10;
	}
	return (ft_putstr(res));
}
