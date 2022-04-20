/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:26:20 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/20 18:58:56 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#include "ft_printf.h"

int	is_char_match(char c, char *list)
{
	int	i;
	int res;

	i = 0;
	res = 0;
	while (list[i] != '\0')
	{
		if (list[i] == c)
			res = 1;
		i++;
	}
	return (res);
}

// -- c --
void	c_conversion(va_list argptr)
{
	char	res;

	res = (char) va_arg(argptr, int);
	write(1, &res, 1);
}

// -- s --
void	s_conversion(va_list argptr)
{
	char	*res;

	res = va_arg(argptr, char*);
	while (*res != '\0')
	{
		write(1, res, 1);
		res++;
	}
}

// -- d & i --
int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

void	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		return ;
	while (s[count] != '\0')
		count++;
	write(1, s, count);
}

void	ft_itoa(int n)
{
	int		digit;
	char	*res;

	digit = count_digits(n);
	if (n < 0)
		digit++;
	res = (char *) malloc((digit + 1) * sizeof(char));
	if (res == NULL)
		return ;
	res[digit--] = '\0';
	if (n < 0)
		res[0] = '-';
	if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		if (n < 0)
			res[digit--] = n % 10 * -1 + '0';
		else
			res[digit--] = n % 10 + '0';
		n /= 10;
	}
	ft_putstr(res);
}

void	d_or_i_conversion(va_list argptr)
{
	int	res;

	res = va_arg(argptr, int);
	ft_itoa(res);
}

// -- u --
void	u_conversion(va_list argptr)
{
	unsigned int	res;

	res = va_arg(argptr, unsigned int);
	//ft_itoa with unsigned int.
}

// -- x --


// -- X --

// -- p --


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
			if (is_char_match(format[i], "cspdiuxX%") == 1)
			{
				if (format[i] == 'c')
					c_conversion(argptr);
				if (format[i] == 's')
					s_conversion(argptr);
				//if (format[i] == 'p')
					//p_conversion(argptr);
				if (format[i] == 'd' || format[i] == 'i')
					d_or_i_conversion(argptr);
				if (format[i] == 'u')
					u_conversion(argptr);
				//if (format[i] == 'x')
					//x_conversion(argptr);
				//if (format[i] == 'X')
					//X_conversion(argptr);
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
