#include "main.h"

/**
 * getSpecifierPrintFunction - gets a print function according to specifier
 * @format: character to be printed
 * Return: function pointer to the right print function
 */

int (*getSpecifierPrintFunction(const char *format))(va_list, int *)
{
	int i;
	specifierPrintFunction specifierPrintFunctions[] = {
		{'c', printCharacter},
		{'s', printString},
		{'d', printInteger},
		{'i', printInteger},
		{'\0', NULL}};
	i = 0;
	while (specifierPrintFunctions[i].character != '\0')
	{
		if (specifierPrintFunctions[i].character == *format)
		{
			return (specifierPrintFunctions[i].function);
		}
		i++;
	}
	return (NULL);
}
