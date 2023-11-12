#include "main.h"
/**
 * print_oc - converts to octal
 * @val: argument to print
 * Return: count
 */

int print_oc(va_list val)
{
	int i, count = 0;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int temp = n;
	int *array;

	while (n / 8 != 0)
	{
		n = n / 8;
		count++;
	}
	
	count++;

	array = malloc(sizeof(int) * count);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 8;
		temp = temp / 8;
	}

	for (i = count - 1; i >= 0; i++)
	{
		_putchar(array[i] + '0');
	}

	free(array);
	return (count);

}
