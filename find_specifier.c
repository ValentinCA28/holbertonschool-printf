#include "main.h"

/**
 * get_specifier - function that selects the correct function
 * for a format specifier
 * @spe_c: character found after the '%'
 *
 * Return: pointer to the corresponding handler function,
 *         or NULL if the specifier is not supported.
 */

int (*get_specifier(char spe_c))(va_list)
{
	int i = 0;

	spe_tab tab[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'d', print_s_int},
		{'i', print_s_int},
		{'u', print_uns_int},
		{'o', print_oct},
		{'b', print_bin},
		{'x', print_hex},
		{'X', print_HEX},
		{'r', print_reverse},
		{'\0', NULL}
	};

	/* Scan table until end marker */
	while (tab[i].spe_c != '\0')
	{
		/* Return handler if match */
		if (spe_c == tab[i].spe_c)
			return (tab[i].f);
		i++;
	}
	/* No match found */
	return (NULL);
}
