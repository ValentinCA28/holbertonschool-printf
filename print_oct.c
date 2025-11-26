#include "main.h"

/**
 * print_oct - Handler function for the %o specifier
 * @args: Argument list containing the unsigned int to print
 *
 * Extracts an unsigned integer and prints it in base 8
 * (octal) using print_unsigned_base.
 *
 * Return: Number of characters printed
 */

int print_oct(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 8, "01234567"));
}
