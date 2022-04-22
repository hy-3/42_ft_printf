#include "ft_printf.h"

int	hex(unsigned long i, int count)
{
	if (i < 16)
	{
		write(1, &HEX_L[i], 1);
		return (++count);
	}
	else
	{
		count = hex(i / 16, ++count);
		write(1, &HEX_L[i % 16], 1);
	}
	return (count);
}

int	p_conv(va_list argptr)
{
	unsigned long	arg;
	int				count;

	arg = va_arg(argptr, unsigned long);
	write(1, "0x", 2);
	count = 2;
	count += hex(arg, 0);
	return (count);
}
