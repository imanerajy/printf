#include "main.h"

/**
 * _puts - print string
 * @str: string passed
 * Return: void
 */
void _puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
