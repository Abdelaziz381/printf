#include "main.h"

/**
 * @_strlen - return string length
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
