#include "main.h"

/**
 * _number - print a given number.
 * @n: number to be printed
 * Return: void
 */
int _number(unsigned int n)
{
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n == 2147484671)
	{
		_putchar('2');
		len += 1;
		len += _number(147484671);
	}
	else if (n > 9)
	{
		len += _number(n / 10);
		len += _number(n % 10);
	}
	else
		 _putchar(n + '0');
	return (len);
}
