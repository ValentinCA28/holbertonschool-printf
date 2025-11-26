#include "main.h"

/**
 * print_mod - Handler function for the %% specifier
 * @args: Argument list (unused)
 * Prints a literal '%' character.
 *
 * Return: Always 1 (number of characters printed)
 */

int print_mod(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
