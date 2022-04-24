#include "ft_printf.h"

int	count_digits_unsigned_int(unsigned int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	return (count);
}

int	cust_putnbr_unsigned_int(unsigned int n)
{
	int		digit;
	char	each_int;
	int		count;

	count = 0;
	digit = count_digits_unsigned_int(n);
	count += digit;
	while (digit-- > 0)
	{
		each_int = n / base_ten_power(digit) + '0';
		write(1, &each_int, 1);
		n %= base_ten_power(digit);
	}
	return (count);
}