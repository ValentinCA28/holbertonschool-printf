#include "main.h"

/**
 * print_char - Handler function for the %c specifier
 * @args: Argument list containing the character to print
 * Extracts a character from the argument list and prints it using _putchar.
 *
 * Return: Always returns 1 (number of characters printed)
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
