#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: The string
 *
 * Return: number of characters printed
 */
/*int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}*/

int print_str(va_list args)
{
	int i;
	char *str = va_arg(args,char *);

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
