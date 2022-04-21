#include "ft_printf.h"

void	u_conv(va_list argptr)
{
	unsigned int	res;

	res = va_arg(argptr, unsigned int);
	ft_itoa_unsigned_int(res);
}
