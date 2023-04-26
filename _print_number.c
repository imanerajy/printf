#include "main.h"
/**
 * _print_number - print a given numbe
 * @args: argument
 * Return: len
 */
int _print_number(va_list args)
{
	int n = va_arg(args, int);
	int len = 0, div = 1;

	if (n == -2147483648)
	{
		_puts("-2147483648");
		return (11);
	}
	if (n < 0 && n != -2147483648)
	{
		_putchar('-');
		n = -n;
		len++;
	}
	if (n >= 0)
	{
		while (n / div > 9)
			div *= 10;

		while (div != 0)
		{
			_putchar((n / div) % 10 + '0');
			div /= 10;
			len++;
		}
	}
	return (len);
}
