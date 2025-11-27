#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @args: va_list containing the string
 * Return: Number of characters printed
 */
int print_reverse(va_list args)
{
	char *str;
	int i;
	int count = 0;

	str = va_arg(args, char *);
	if (!str)
	{
		str = "(null)";
	}

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(str[i]);
		count++;
	}
	return (count);
}