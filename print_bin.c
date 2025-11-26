#include "main.h"

/**
 * print_bin - Handler function for the %b specifier
 * @args: Argument list containing the unsigned int to print
 *
 * Extracts an unsigned integer and prints it in base 2
 * (binary) using print_unsigned_base.
 *
 * Return: Number of characters printed
 */

int print_bin(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 2, "01"));
}
