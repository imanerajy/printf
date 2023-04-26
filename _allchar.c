#include "main.h"
/**
 * _allchar - Calls the appropriate functions
 *
 * @args: The arguments list for the format specifier
 * @format: The format specifier character to handle
 *
 * Return: The number of characters printed
 */
int _allchar(va_list args, char format)
{
	int n = 0;

	if (format == 'c')
		n += _printf_char(args);
	if (format == 's')
		n += _printf_string(args);
	if (format == 'd' || format == 'i')
		n += _print_number(args);
	return (n);
}
