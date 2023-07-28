# ft_printf

It's a fucntion which replicates printf function of C language.

The function handles only following conversions.
>c, s, p, d, i, u, x, X, %

## Overview
You can check the subject [here](https://github.com/hy-3/42_ft_printf/blob/master/printf.pdf)

## Usage
```
-- overview --
$ make
$ gcc <your c file> libftprintf.a

-- sample --
$ vi main.c
$ cat main.c
#include "src/ft_printf.h"
int	main(void)
{
	ft_printf("c conversion: %c\n", '0');
	ft_printf("s conversion: %s\n", "Hello world");
	ft_printf("p conversion: %p\n", "Hello world");
	ft_printf("d conversion: %d\n", 11);
	ft_printf("i conversion: %i\n", 11);
	ft_printf("u conversion: %u\n", 11);
	ft_printf("x conversion: %x\n", 11);
	ft_printf("X conversion: %X\n", 11);
	ft_printf("percent conversion: %%\n");
}

$ make
$ gcc main.c libftprintf.a
$ ./a.out
```
