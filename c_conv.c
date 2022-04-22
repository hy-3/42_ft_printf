#include "ft_printf.h"

int	c_conv(va_list argptr)
{
	char	arg;

	arg = (char) va_arg(argptr, int);
	write(1, &arg, 1);
	return (1);
}
