#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct specifierPrintFunction - structure for printing specifiers
 * @character: character to be printed
 * @function: function to print character
*/

typedef struct specifierPrintFunction
{
	char character;
	int (*function)(va_list, int *);
} specifierPrintFunction;

int _printf(const char *format, ...);
int printRegularCharacter(const char *format, int *count);
int printCharacter(va_list args, int *count);
int printString(va_list args, int *count);
int (*getSpecifierPrintFunction(const char *format))(va_list, int *);
int printSpecialCharacter(const char *format, int *count);

#endif
