#ifndef MAIN_H
#define MAIN_H

/* ---- Library ---- */

#include <stdarg.h>
#include <unistd.h>

/* ---- Prototypes ---- */

	/* ---- basic prototype ---- */
	int _printf(const char *format, ...);
	int _core_printf(const char *format, va_list args);
	int _putchar(char c);

	/* ---- find function ---- */

	int (*get_specifier(char c))(va_list);

	/* ---- print function ---- */

	/* each description function is withing it's own files*/
	int print_str(va_list args);        /*%s*/
	int print_char(va_list args);       /*%c*/
	int print_percent(va_list args);        /*%%*/
	int print_s_int(va_list args);      /*%d and %i*/
	int print_uns_int(va_list args);    /*%u*/
	int print_hex(va_list args);        /*%x*/
	int print_HEX(va_list args);        /*%X*/
	int print_oct(va_list args);        /*%o*/
	int print_bin(va_list args);        /*%b*/

	/* ---- utils function ---- */
	int print_unsigned_base(unsigned int n, unsigned int base,
		const char *digits);

/* ---- Structure ---- */
/**
 * struct specifier - assign a format character to a function
 * @spe_c: the character of the specifier  ('d', 'i', 'c', 's', '%')
 * @f: pointer to the function that handles this specify
 */

typedef struct specifier
{
	char spe_c;
	int (*f)(va_list args);
} spe_tab;

#endif
