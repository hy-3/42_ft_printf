#include "ft_printf.h"

void	hex_l(unsigned int i)
{
	if (i < 16)
		write(1, &HEX_L[i], 1);
	else
	{
		hex_l(i / 16);
		write(1, &HEX_L[i % 16], 1);
	}
}

void	hex_c(unsigned int i)
{
	if (i < 16)
		write(1, &HEX_C[i], 1);
	else
	{
		hex_c(i / 16);
		write(1, &HEX_C[i % 16], 1);
	}
}

void	x_conv(va_list argptr, int flag)
{
	unsigned int	res;

	res = va_arg(argptr, unsigned int);
	if (flag == 0)
		hex_l(res);
	if (flag == 1)
		hex_c(res);
}