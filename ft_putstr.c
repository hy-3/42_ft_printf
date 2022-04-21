#include "ft_printf.h"

void	ft_putstr(char *s)
{
	int	count;

	count = 0;
	if (s == NULL)
		return ;
	while (s[count] != '\0')
		count++;
	write(1, s, count);
}