#include "ft_printf.h"

void	s_conv(va_list argptr)
{
	char	*res;

	res = va_arg(argptr, char*);
	while (*res != '\0')
	{
		write(1, res, 1);
		res++;
	}
}
