#include "main.h"

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (0);
}
