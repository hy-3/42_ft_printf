/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cust_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:23:09 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/23 12:19:45 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	cust_putstr(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		return (0);
	while (s[count] != '\0')
		count++;
	write(1, s, count);
	return (count);
}
