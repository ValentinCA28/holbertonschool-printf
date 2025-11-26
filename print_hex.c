#include "main.h"

/**
 * print_hex - Handler function for the %x specifier
 * @args: Argument list containing the unsigned int to print
 *
 * Extracts an unsigned integer and prints it in lowercase
 * hexadecimal using print_unsigned_base.
 *
 * Return: Number of characters printed
 */

int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 16, "0123456789abcdef"));
}

/**
 * print_HEX - Handler function for the %X specifier
 * @args: Argument list containing the unsigned int to print
 *
 * Extracts an unsigned integer and prints it in uppercase
 * hexadecimal using print_unsigned_base.
 *
 * Return: Number of characters printed
 */

int print_HEX(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 16, "0123456789ABCDEF"));
}
