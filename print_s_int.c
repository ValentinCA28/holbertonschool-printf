#include "main.h"

/**
 * print_s_int - Handler function for %d and %i specifiers
 * @args: Argument list containing the integer to print
 *
 * Extracts a signed integer, prints the sign for negative values,
 * converts it to an unsigned int, and delegates base-10 printing to
 * print_unsigned_base.
 *
 * Return: Number of characters printed
 */

int print_s_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int va_n;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	} else if (n > 0)
	{
		va_n = n;
	} else if (n < 0)
	{
		_putchar('-');
		count++;
		va_n = -n;
	}
	/* Print the unsigned part in base 10 */
	count += print_unsigned_base(va_n, 10, "0123456789");
	return (count);
}
