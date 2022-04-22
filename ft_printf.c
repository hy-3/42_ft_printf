/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:26:20 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/20 19:25:33 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define CONVERSION "cspdiuxX%"

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list argptr;

	i = 0;
	va_start(argptr, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (is_char_match(format[i], CONVERSION) == 1)
			{
				if (format[i] == 'c')
					c_conv(argptr);
				if (format[i] == 's')
					s_conv(argptr);
				if (format[i] == 'p')
					p_conv(argptr);
				if (format[i] == 'd' || format[i] == 'i')
					d_i_conv(argptr);
				if (format[i] == 'u')
					u_conv(argptr);
				if (format[i] == 'x')
					x_conv(argptr, 0);
				if (format[i] == 'X')
					x_conv(argptr, 1);
				if (format[i] == '%')
					write(1, "%", 1);
			}
			i++;
		}
		write(1, &format[i], 1);
		i++;
	}
	va_end(argptr);
	return 1; //TODO change to prospected return
}
