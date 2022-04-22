#include "ft_printf.h"

void	hex(unsigned long i)
{
	if (i < 16)
		write(1, &HEX_L[i], 1);
	else
	{
		hex(i / 16);
		write(1, &HEX_L[i % 16], 1);
	}
}

void	p_conv(va_list argptr)
{
	unsigned long	res;

	res = va_arg(argptr, unsigned long);
	write(1, "0x", 2);
	hex(res);
}
