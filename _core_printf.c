#include "main.h"

/**
 * _core_printf - Minimal printf-like function
 * @format: Format string
 * @args:   Argument list
 *
 * Description:
 * Iterates through the format string, prints regular characters,
 * and processes specifiers after '%'. Calls the matching handler
 * if supported, otherwise prints '%' followed by the invalid specifier.
 *
 * Return:
 * Total printed characters,
 * -1 if format is NULL or '%' is incomplete at end of string.
 */

int _core_printf(const char *format, va_list args)
{
	int count = 0;
	int i = 0;
	int (*p_va_list)(va_list);

	if (!format) /* NULL format → error */
		return (-1);

	while (format[i]) /* Loop until end of string */
	{
		if (format[i] != '%') /* Regular character */
		{
			_putchar(format[i]);
			count++;
			i++;
			continue;
		}
		i++; /* Skip '%' */
		if (format[i] == '\0') /* Trailing '%' → error */
			return (-1);

		p_va_list = get_specifier(format[i]); /* Get handler for specifier */
		if (p_va_list != NULL) /* Valid specifier */
		{
			count += p_va_list(args);
		}
		/* Unknown specifier → print literally */
		else
		{
			_putchar('%');
			_putchar(format[i]);
			count += 2;
		}
		i++; /* Move forward */
	}
	return (count);
}
