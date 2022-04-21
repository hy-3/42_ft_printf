#include "ft_printf.h"

void	d_i_conv(va_list argptr)
{
	int	res;

	res = va_arg(argptr, int);
	ft_itoa_int(res);
}