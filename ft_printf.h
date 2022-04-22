#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define CONVERSION "cspdiuxX%"
#define HEX_L "0123456789abcdef"
#define HEX_C "0123456789ABCDEF"

// Main
int		ft_printf(const char *format, ...);

// Conversion
int	c_conv(va_list argptr);
int	s_conv(va_list argptr);
int	p_conv(va_list argptr);
int	d_i_conv(va_list argptr);
int	u_conv(va_list argptr);
int	x_conv(va_list argptr, int flag);

// Util
int				is_char_match(char c, char *list);
int				ft_itoa_int(int n);
int				ft_itoa_unsigned_int(unsigned int n);
int				count_digits_int(int n);
unsigned int	count_digits_unsigned_int(unsigned int n);
int				ft_putstr(char *s);

#endif