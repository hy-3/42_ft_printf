#include "ft_printf.h"

int	s_conv(va_list argptr)
{
	char	*arg;
	int		i;

	arg = va_arg(argptr, char*);
	i = 0;
	while (arg[i] != '\0')
	{
		write(1, &arg[i], 1);
		i++;
	}
	return (i);
}
