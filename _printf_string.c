#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf_string - Print a string
 * @args: List of arguments
 *
 * Return: Number of characters printed
 */
int _printf_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count;

	if (s == NULL)
		s = "(null)";
	count = 0;
	while (*s)
	{
		_putchar(*s++);
		count++;
	}
	return (count);
}
