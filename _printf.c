#include "main.h"

/**
 * _printf - Entry point for the custom printf function
 * @format: Format string
 *
 * Description:
 * Initializes the argument list, forwards the work to _core_printf,
 * then closes the argument list and returns the total printed characters
 *
 * Return: Total number of printed characters, or -1 on error
 */

int _printf(const char *format, ...)
{
	va_list args;
	/* Call the core engine (_core_printf) */
	int print;

	va_start(args, format);
	print = _core_printf(format, args);
	va_end(args);
	return (print);
}
