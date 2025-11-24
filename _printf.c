#include "main.h"

/*
*
*
*
*
*
*/

/*
* initialiser les variables va_list
* parcourir la chaine donné (format)
* si % vu - renvoyer la bonne fonction
* retourner le nb de caractère
*
*/

int _printf(const char *format, ...)
{
    va_list args;
    int count_char = 0;
    int format_index = 0;

    va_start(args, format);

    /*boucler sur format
    * si caractère normal = putchart et count ++
    * si % aller dans find specifier, choisir la bonne function
    */

    va_end(args);
    return (count_char);
}