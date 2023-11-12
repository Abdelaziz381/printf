#include "main.h"

int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int i, y;

	p = va_arg(val, void *);

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	x = (unsigned long int)p;

	_putchar('0');
	_putchar('x');

	y = print_EXTra_hex(y);
}