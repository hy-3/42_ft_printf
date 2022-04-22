#include "ft_printf.h"

int	u_conv(va_list argptr)
{
	unsigned int	arg;

	arg = va_arg(argptr, unsigned int);
	return (ft_itoa_unsigned_int(arg));
}
