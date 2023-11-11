#include "main.h"

/**
 * Print_char - print a char
 * @val: arguments
 * Return: 1
 */

int print_char(va_list val)
{
	char s;

	s = va_arg(val, int);

	_putchar(s);
	return (1);
}
