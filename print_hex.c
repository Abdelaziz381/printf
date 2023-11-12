#include "main.h"
/**
 * print_hex - converts to hex
 * @val: argument to print
 * Return: count
 */

int print_hex(va_list val)
{
	int i, count = 0;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int temp = n;
	int *array;

	while (n / 16 != 0)
	{
		n = n / 16;
		count++;
	}
	
	count++;

	array = malloc(sizeof(int) * count);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}

	for (i = count - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;

		_putchar(array[i] + '0');
	}

	free(array);
	return (count);

}
