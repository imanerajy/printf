#include "main.h"
/**
 * _uns - Print an unsigned integer
 *
 * @args: The argument list for the unsigned integer
 *
 * Return: The number of characters printed
 */
int _uns(va_list args)
{
	unsigned int n = va_arg(args, int);

	return (_number(n));
}
