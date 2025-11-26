#include "main.h"

/**
 * print_uns_int - Handler function for the %u specifier
 * @args: Argument list containing the unsigned int to print
 *
 * Extracts an unsigned integer from the argument list and
 * prints it in base 10 using print_unsigned_base.
 *
 * Return: Number of characters printed
 */

int print_uns_int(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 10, "0123456789"));
}
