#include "main.h"

/**
 * _binary - function that converts decimal to binary
 * @args: a va_list of arguments friom printf
 * Return: The number of characters printed
**/

int _binary(va_list args)
{
	unsigned int n = va_arg(args, int);
	int bin[32], i, j, count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	i = 0;
	while (n > 0)
	{
		bin[i] = n % 2;
		n /= 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(bin[j] + '0');
		j--;
		count++;
	}
	return (count);
}
