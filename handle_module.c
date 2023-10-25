#include "main.h"

/**
 * handleModule - handle the case of %%
 * @format: list of argument types passed to the function
 * @count: number of characters
 * Return: number of characters printed
 */

int handleModule(const char *format, int *count)
{
	if (*format != '%')
	{
		*count = printRegularCharacter(format - 1, count);
	}
	*count = printRegularCharacter(format, count);
	return (*count);
}
