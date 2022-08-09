#include "main.h"

/**
 * _printf - Function that prints as the nartive printf
 * @format: Paramater to print
 *
 * return: The number of character printed
 */

int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list My_list;

	va_start(My_list, format);

	/*if (format == NULL)
		return (-1);*/

	for (i = 0; format[i] != '\0'; i++)
	{
		for (;format[i] == '%'; i++)
			switch (format[i + 1])
			{
				case 'c':
					count += print_char(My_list);
					i += 1;
					break;
				case 's':
					count += print_str(My_list);
					i++;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 1;
			}
		if (format[i])
		{
			_putchar(format[i]);
			count++;
		}

	}
	va_end(My_list);
	return (count);
}
