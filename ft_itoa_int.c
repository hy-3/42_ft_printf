/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:21:54 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/23 11:21:57 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoa_int(int n)
{
	int		digit;
	char	*str;

	digit = count_digits_int(n);
	if (n < 0)
		digit++;
	str = (char *) malloc((digit + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	str[digit--] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		if (n < 0)
			str[digit--] = n % 10 * -1 + '0';
		else
			str[digit--] = n % 10 + '0';
		n /= 10;
	}
	return (ft_putstr(str));
}
