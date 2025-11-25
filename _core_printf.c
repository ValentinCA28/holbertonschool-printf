#include "main.h"

/**
 * _core_print - Custom implementation of printf
 * @format: Format string containing text and optional conversion specifiers
 * @args:   va_list containing the arguments that match the specifiers
 *
 * Description:
 * This function iterates through the format string character by character.
 * - Normal characters are printed as-is using _putchar.
 * - When a '%' is encountered, the next character is treated as a specifier.
 * - get_specifier() returns a pointer to the appropriate handler function
 *   (e.g., print_char, print_string, print_int, etc.).
 * - If the specifier is supported, its handler is called.
 * - If unknown, the '%' and the invalid specifier are printed literally.
 *
 * Return: Total number of characters printed
 *         -1 if format is NULL or ends with an incomplete specifier (e.g., "%\0")
 */
int _core_printf(const char *format, va_list args)
{

    int count = 0;
    int i = 0;
    int (*p_va_list)(va_list);

    /* Check if format string is NULL (invalid input) */
    if (!format)
        return (-1);

    /* Loop until end of string */
    while (format[i])
    {
    /* Print the current character if the char is NOT a format specifier */
        if (format[i] != '%')
        {
            _putchar(format[i]);
            count++;
            i++;
            continue;
        }
        /* Progress in the string*/
        i++;

        if (format[i] == '\0')
        {          
            return (-1);
        }
        /* Look up the correct handler function for this specifier */
        p_va_list = get_specifier(format[i]);
        /* If pointer isn't NULL then it returns the correct specifier function */
        if (p_va_list != NULL)
        {
            va_list copy;
            va_copy(copy, args);
            count += p_va_list(copy);
            va_end(copy);
        }
        /* If specifier is unknown or not supported 
        * print the % that started the sequence and the char different de specifier
        * then increment twice*/
        else
        {
            _putchar('%');
            _putchar(format[i]);
            count += 2;
        }

        i++;
    }
    return (count);
}