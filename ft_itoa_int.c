#include "ft_printf.h"

void	ft_itoa_int(int n)
{
	int		digit;
	char	*res;

	digit = count_digits_int(n);
	if (n < 0)
		digit++;
	res = (char *) malloc((digit + 1) * sizeof(char));
	if (res == NULL)
		return ;
	res[digit--] = '\0';
	if (n < 0)
		res[0] = '-';
	if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		if (n < 0)
			res[digit--] = n % 10 * -1 + '0';
		else
			res[digit--] = n % 10 + '0';
		n /= 10;
	}
	ft_putstr(res);
}