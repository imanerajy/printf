#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - Write a function that gives output according to a format.
 * @format: a string containing zero or more format specifiers
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, num = 0;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c' || format[i] == 's' || format[i] == 'd'
					|| format[i] == 'i')
				num += _allchar(args, format[i]);
			else if (format[i] == '%')
				num += _putchar('%');
			else if (format[i] == 'b')
				num += _binary(args);
			else if ((format[i] == 'u') || (format[i] == 'x') || (format[i] == 'X')
							|| (format[i] == 'o'))
				num += _all(args, format[i]);
			else
			{
				_putchar('%');
				_putchar(format[i]);
				num += 2;
			}
		}
		else
			num += _putchar(format[i]);
	}
	va_end(args);
	return (num);
}
