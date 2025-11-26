#include "main.h"

/**
 * print_unsigned_base - displays an unsigned integer in a given base
 * @n: unsigned value to display
 * @base: base (2, 8, 10, 16, ...)
 * @digits: string representing the symbols
 *
 * Return: number of characters printed
 */

int print_unsigned_base(unsigned int n, unsigned int base, const char *digits)
{
	unsigned int current_n = n;
	unsigned int power = 1;
	unsigned int digit;
	int count = 0;

	if (n == 0)
	{
		_putchar(digits[0]);
		return (1);
	}

	/* Find the greatest “power” in the given base */
	while ((current_n / power) >= base)
	{
		power *= base;
	}

	while (power >= 1)
	{
		digit = current_n / power;
		_putchar(digits[digit]);
		count++;
		current_n = current_n % power;
		power /= base;
	}
	return (count);
}

