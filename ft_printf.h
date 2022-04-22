#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define HEX_L "0123456789abcdef"
#define HEX_C "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
void	c_conv(va_list argptr);
void	s_conv(va_list argptr);
void	p_conv(va_list argptr);
void	d_i_conv(va_list argptr);
void	u_conv(va_list argptr);
void	x_conv(va_list argptr, int flag);

// Util
int		is_char_match(char c, char *list);
void	ft_itoa_int(int n);
void	ft_itoa_unsigned_int(unsigned int n);
int		count_digits_int(int n);
unsigned int	count_digits_unsigned_int(unsigned int n);
void	ft_putstr(char *s);

#endif