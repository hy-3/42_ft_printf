/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:22:49 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/23 12:21:20 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	c_conv(va_list argptr)
{
	char	arg;

	arg = (char) va_arg(argptr, int);
	return (cust_putchar(arg));
}
