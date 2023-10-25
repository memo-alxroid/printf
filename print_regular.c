#include "main.h"
/**
    * printRegularCharacter - prints a regular character
    * @format: character to be printed
    * @count: number of characters printed
    * Return: number of characters printed
*/

int printRegularCharacter(const char *format, int *count)
{
	putchar(*format);
	*count += 1;
	return (*count);
}
