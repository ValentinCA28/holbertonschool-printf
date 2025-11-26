#include "main.h"

/**
 * print_str - Handler function for the %s specifier
 * @args: Argument list containing the string to print
 *
 * Extracts a string from the argument list and prints it
 * character by character. If the string is NULL, it prints "(null)".
 *
 * Return: Number of characters printed
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";

	while (str[count])
		_putchar(str[count++]);

	return (count);
}
