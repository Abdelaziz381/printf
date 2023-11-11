#include "main.h"

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int count = 0;
	int inc = 0;

	while (s[count] != '\0')
	{
		inc++;
		count++;
	}
return (inc);
}

/**
 *_strlens - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlens(const char *s)
{
	int count = 0;
	int inc = 0;

	while (s[count] != '\0')
	{
		inc++;
		count++;
	}
return (inc);
}
