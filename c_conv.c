#include "ft_printf.h"

void	c_conv(va_list argptr)
{
	char	res;

	res = (char) va_arg(argptr, int);
	write(1, &res, 1);
}
