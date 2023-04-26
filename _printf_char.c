#include "main.h"

/**
 * _printf_char - Print a single character args
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int _printf_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
