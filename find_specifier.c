#include "main.h"

/*
* reçoit le caractère jsute aprés %
* retourne un pointeur vers la fonction en lien
* 
*
*
*/
int (*get_specifier(char c))(va_list)
{
    int i = 0;
    spe_tab tab[] = 
    {
        {'c', print_char},
        {'s', print_str},
        {'%', print_mod},
        {'d', print_nb},
        {'i', print_nb},
        {'\0', NULL}
    };

	while (tab[i].c != '\0')
	{
		if (c == tab[i].c)
			return (tab[i].f);
		i++;
	}
	return (NULL);
}