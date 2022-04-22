#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		return (0);
	while (s[count] != '\0')
		count++;
	write(1, s, count);
	return (count);
}