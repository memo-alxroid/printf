#include "main.h"

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int count;
	int (*specifierPrintFunction)(va_list, int *);
	va_list args;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format != '%')
		{
			count = printRegularCharacter(format, &count);
			format++;
		}
		else
		{
			specifierPrintFunction = getSpecifierPrintFunction(++format);
			if (specifierPrintFunction == NULL)
			{
				if (*format != '%')
				{
					count = printRegularCharacter(format - 1, &count);
				}
				count = printRegularCharacter(format, &count);
				format += 1;
				continue;
			}
			else
			{
				specifierPrintFunction(args, &count);
			}
			format++;
		}
	}
	va_end(args);
	return (count);
}
