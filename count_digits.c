/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:21:45 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/23 11:21:47 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_digits_int(int n)
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

unsigned int	count_digits_unsigned_int(unsigned int n)
{
	unsigned int	count;

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
