#ifndef MAIN_H
#define MAIN_H

/* ---- Library ---- */

#include <stdarg.h>
#include <unistd.h>

/* ---- Prototypes ---- */

    /* ---- main function ---- */
    int _printf(const char *format, ...);

    /* ---- find function ---- */

    int (*get_specifier(char c))(va_list);

    /* ---- print function ---- */

    int print_str(va_list args);
    int print_char(va_list args);
    int print_mod(va_list args);
    int print_nb(va_list args);

    /* ---- utils function ---- */

/* ---- Structure ---- */
/**
 * 
 */

typedef struct specifier
{
    char c;
    int (*f)(va_list args);
}spe_tab;

#endif // MAIN_H