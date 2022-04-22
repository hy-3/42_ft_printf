#include "ft_printf.h"

int	d_i_conv(va_list argptr)
{
	int	arg;

	arg = va_arg(argptr, int);
	return (ft_itoa_int(arg));
}