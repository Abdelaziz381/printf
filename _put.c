#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _puts - prints a string
 * @str: The string to be printed
 * @Return: Number of characters printed
 */

int _puts(char *str)
{
	char *x = str;

	while (*str)
		_putchar(*str++);

	return (str - x);
}
