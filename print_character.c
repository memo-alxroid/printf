#include "main.h"

/**
 * printCharacter - prints a regular character
 * @args: the next argument in the argument list
 * @count: number of characters printed
 * Return: number of characters printed
 */

int printCharacter(va_list args, int *count)
{
	putchar(va_arg(args, int));
	*count += 1;
	return (*count);
}
