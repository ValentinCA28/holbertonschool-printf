#ifndef MAIN_H
#define MAIN_H

/* ---- Library ---- */

#include <stdarg.h>

/* ---- Prototypes ---- */

    /* ---- main function ---- */
    int _printf(const char *format, ...);

    /* ---- print function ---- */

    int print_str(va_list args);
    int print_nb(va_list args);

    /* ---- utils function ---- */

/* ---- Structure ---- */
/**
 * 
 */

typedef struct
{
    char *letter_spe;
    void (*f)(va_list args);
} specifier;

specifier tab[] = 
{
    {'c', print_str},
    {'s', print_str},
    {'%', print_str},
    {'d', print_nb},
    {'i', print_nb},
}

#endif // MAIN_H