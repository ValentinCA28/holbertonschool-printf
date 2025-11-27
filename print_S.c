#include "main.h"

/**
 * print_S - Prints a string and replaces non-printable characters with \xHH
 * @args: List of arguments containing the string to print
 *
 * Return: Number of characters printed, or -1 if the string is NULL
 */

int print_S(va_list args)
{
	char *str;
	int i;
	int count = 0;
	unsigned char current_vl;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";

	i = 0;
	while (str[i])
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			current_vl = str[i];
			count += print_non_printable_hex(current_vl);
		} else
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count);
}

/**
 * print_non_printable_hex - Prints a character as a \xHH hexadecimal sequence
 * @value: Unsigned character to convert and print
 *
 * Return: Always 4 (number of characters printed)
 */

int print_non_printable_hex(unsigned char value)
{
	unsigned char current_vl, high_vl, low_vl;

	current_vl = value;
	_putchar('\\');
	_putchar('x');
	high_vl = current_vl / 16;
	low_vl = current_vl % 16;

	if (high_vl < 10)
		_putchar('0' + high_vl);
	else
		_putchar('A' + (high_vl - 10));

	if (low_vl < 10)
		_putchar('0' + low_vl);
	else
		_putchar('A' + (low_vl - 10));
	return (4);
}
