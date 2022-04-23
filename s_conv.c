/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_conv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:22:30 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/23 11:24:59 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	s_conv(va_list argptr)
{
	char	*arg;
	int		i;

	arg = va_arg(argptr, char *);
	i = 0;
	while (arg[i] != '\0')
	{
		write(1, &arg[i], 1);
		i++;
	}
	return (i);
}
