#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "../ft_printf.h"

int		ft_printf(const char *format, ...);

void	print_result(int original, int mine)
{
	if (original == mine)
		printf("\n-> [pass]\n\n\n");
	else
	{
		printf("\n-> [fail] : return values are different)\n");
		printf("original: %i mine: %i\n\n\n", original, mine);
	}
}

void	test_int_1(char *s, int n1)
{
	printf("-- test --\n");
	int original = printf(s, n1);
	int mine = ft_printf(s, n1);
	print_result(original, mine);
}
void	test_int_3(char *s, int n1, int n2, int n3)
{
	printf("-- test --\n");
	int original = printf(s, n1, n2, n3);
	int mine = ft_printf(s, n1, n2, n3);
	print_result(original, mine);
}

void	test_str_0(char *s)
{
	printf("-- test --\n");
	int original = printf(s);
	int mine = ft_printf(s);
	print_result(original, mine);
}
void	test_str_1(char *s, char *str1)
{
	printf("-- test --\n");
	int original = printf(s, str1);
	int mine = ft_printf(s, str1);
	print_result(original, mine);
}
void	test_str_3(char *s, char *str1, char *str2, char *str3)
{
	printf("-- test --\n");
	int original = printf(s, str1, str2, str3);
	int mine = ft_printf(s, str1, str2, str3);
	print_result(original, mine);
}

int	main(void)
{
	// %c
	printf("\n\n######### c #########\n\n");
	test_int_1("hello %c\n", 48);
	test_int_1("%c", '0');
	test_int_1("%c\n", 200);
	test_int_3("%c %c %c\n", '\t', 100, 124);
	test_str_0("%c");

	// %s
	printf("\n\n######### s #########\n\n");
	test_str_1("hello %s\n", "abcdefghijklmopqrstuvwxyz \t \n \v 01234567890 ");
	test_str_1("%s", "hello");
	test_str_3("%s %s %s\n", "abc", "123", "def");
	test_str_1(" NULL %s NULL ", NULL);

	// %p
	printf("\n\n######### p #########\n\n");
	test_str_1("hello %p\n", "abc");
	test_str_1("%p", "abc");
	test_int_1("%p\n", 0);
	test_int_1("%p\n", 1);
	test_int_1("%p\n", -1);
	test_int_1("%p\n", INT_MIN);
	test_int_1("%p\n", INT_MAX);
	test_int_1("%p\n", LONG_MIN);
	test_int_1("%p\n", LONG_MAX);
	test_int_1("%p\n", ULONG_MAX);
	test_int_3("%p %p %p\n", 0, 1, -1);
	test_str_0("%p");

	// %d
	printf("\n\n######### d #########\n\n");
	test_int_1("hello %d\n", 0);
	test_int_1("%d", 0);
	test_int_1("%d\n", 1);
	test_int_1("%d\n", -1);
	test_int_1("%d\n", INT_MIN);
	test_int_1("%d\n", INT_MAX);
	test_int_1("%d\n", LONG_MIN);
	test_int_1("%d\n", LONG_MAX);
	test_int_1("%d\n", ULONG_MAX);
	test_int_3("%d %d %d\n", 0, 1, -1);
	test_str_0("%d");

	// %i
	printf("\n\n######### i #########\n\n");
	test_int_1("hello %i\n", 0);
	test_int_1("%i", 0);
	test_int_1("%i\n", 1);
	test_int_1("%i\n", -1);
	test_int_1("%i\n", INT_MIN);
	test_int_1("%i\n", INT_MAX);
	test_int_1("%i\n", LONG_MIN);
	test_int_1("%i\n", LONG_MAX);
	test_int_1("%i\n", ULONG_MAX);
	test_int_3("%i %i %i\n", 0, 1, -1);
	test_str_0("%i");

	// %u
	printf("\n\n######### u #########\n\n");
	test_int_1("hello %u\n", 0);
	test_int_1("%u", 0);
	test_int_1("%u\n", 1);
	test_int_1("%u\n", -1);
	test_int_1("%u\n", INT_MIN);
	test_int_1("%u\n", INT_MAX);
	test_int_1("%u\n", LONG_MIN);
	test_int_1("%u\n", LONG_MAX);
	test_int_1("%u\n", ULONG_MAX);
	test_int_3("%u %u %u\n", 0, 1, -1);
	test_str_0("%u");

	// %x
	printf("\n\n######### x #########\n\n");
	test_int_1("hello %x\n", 0);
	test_int_1("%x", 0);
	test_int_1("%x\n", 1);
	test_int_1("%x\n", -1);
	test_int_1("%x\n", INT_MIN);
	test_int_1("%x\n", INT_MAX);
	test_int_1("%x\n", LONG_MIN);
	test_int_1("%x\n", LONG_MAX);
	test_int_1("%x\n", ULONG_MAX);
	test_int_3("%x %x %x\n", 0, 1, -1);
	test_str_1("%x\n", "abc");
	test_str_0("%x");

	// %X
	printf("\n\n######### X #########\n\n");
	test_int_1("hello %X\n", 0);
	test_int_1("%X", 0);
	test_int_1("%X\n", 1);
	test_int_1("%X\n", -1);
	test_int_1("%X\n", INT_MIN);
	test_int_1("%X\n", INT_MAX);
	test_int_1("%X\n", LONG_MIN);
	test_int_1("%X\n", LONG_MAX);
	test_int_1("%X\n", ULONG_MAX);
	test_int_3("%X %X %X\n", 0, 1, -1);
	test_str_1("%X\n", "abc");
	test_str_0("%X");

	// %%
	printf("\n\n######### percent #########\n\n");
	test_str_0("%%\n");
	test_str_0("%%%%%\n");
	test_str_0("%%%%%%\n");

	// other cases
	printf("\n\n######### other edge #########\n\n");
	test_str_0("");
	test_str_0("abc \0 123");
	test_str_1("abc%s\0 123", "def");
	test_str_0("%");
	test_str_0(" %\n");
	test_int_3("%i%d%u%%",1,2,3);
	test_int_3("%%%i%d%u%%",1,2,3);
	test_str_3("%s%p%s%%","a","b","c");
	test_str_3("%%%s%p%s%%","a","b","c");

	return (1);
}
