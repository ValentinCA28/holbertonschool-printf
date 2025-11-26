#include "main.h"

/**
 * print_hex - handler pour %x (hexadécimal minuscule)
 * @args: liste d'arguments variadiques
 *
 * Return: nombre de caractères imprimés
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 16, "0123456789abcdef"));
}

/**
 * print_HEX - handler pour %X (hexadécimal majuscule)
 * @args: liste d'arguments variadiques
 *
 * Return: nombre de caractères imprimés
 */
int print_HEX(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);

	return (print_unsigned_base(n, 16, "0123456789ABCDEF"));
}