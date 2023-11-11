#include "main.h"

/**
 * print_str - print a string
 * @val: arguments
 * Return: string lenght
 */

int print_str(va_list val)
{
	char *str;
	int i;
	int len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);

		for (i = 0; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		len = _strlen(str);

		for (i = 0; i < len; i++)
			_putchar(str[i]);
	}
	return (len);
}
