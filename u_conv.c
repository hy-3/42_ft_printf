/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:22:36 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/23 11:22:38 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	u_conv(va_list argptr)
{
	unsigned int	arg;

	arg = va_arg(argptr, unsigned int);
	return (ft_itoa_unsigned_int(arg));
}
