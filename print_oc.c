#include "main.h"
/**
 * print_octal - converts to octal
 * @ap: argument to print
 * @params: the parameters
 * Return: int
 */

int print_octal(va_list ap, params_t *params)
{
	unsigned long l;
	char *str;
	int c = 0;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	str = convert(l, 8, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && 1)
		*--str = '0';

	params->unsign = 1;
	return (c += print_number(str, params));
}
