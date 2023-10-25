#include "main.h"

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int count, formatLength;
	int (*specifierPrintFunction)(va_list, int *);
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

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
			formatLength = strlen(format);
			if (formatLength == 1)
			{
				return (-1);
			}
			specifierPrintFunction = getSpecifierPrintFunction(++format);
			if (specifierPrintFunction == NULL)
			{
				count = handleModule(format, &count);
				format++;
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
