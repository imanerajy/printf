#include "main.h"
/**
 * _all - Calls the functions
 *
 * @args: The arguments list for the format specifier
 * @format: The format specifier character to handle
 *
 * Return: The number of characters printed
 */
int _all(va_list args, char format)
{
	int num = 0;

	if (format == 'x')
	{
		num += _hexa(args);
	}
	if (format == 'u')
	{
		num += _uns(args);
	}
	if (format == 'X')
		num += _hexaup(args);
	if (format == 'o')
		num += _octal(args);
	return (num);
}
