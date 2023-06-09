#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _hexaup - Converts an integer to a hexadecimal characters are in uppercase.
 * @args: A variable argument list containing the integer to convert.
 * Return: The number of characters printed to stdout.
**/

int _hexaup(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char hex[] = "0123456789ABCDEF";
	char *arr;
	int i = 0;
	int j;
	char swap;
	unsigned int tmp;

	if (n == 0)
	{
		return (_putchar('0'));
	}
	arr = (char *) malloc(sizeof(char) * 20);
	if (!arr)
		return (-1);
	while (n != 0)
	{
		tmp = n % 16;
		arr[i++] = hex[tmp];
		n /= 16;
	}
	arr[i] = '\0';
	j = 0;
	while (j < i / 2)
	{
		swap = arr[j];
		arr[j] = arr[i - j - 1];
		arr[i - j - 1] = swap;
		j++;
	}
	j = 0;
	while (j < i)
		_putchar(arr[j++]);
	free(arr);
	return (i);
}
