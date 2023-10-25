#include "main.h"

/**
 * printString - prints a string
 * @args: argument list
 * @count: number of characters printed
 * Return: number of characters printed
 */

int printString(va_list args, int *count)
{
	char *str;
	int i;

	str = va_arg(args, char *);
	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		*count += 1;
		i++;
	}
	return (*count);
}
