
## _printf()

The printf project is a work of Mina Sami, student of Software Engineering at ALX. 

This function named "_printf()" imitates the actual "printf()" command located in the stdio.h library of C programming Language. It contains some of the basic features and functions found in the manual 3 of "printf".

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

	  int _printf(const char *format, ...) 

Where **format** contains the string that is printed. 

_printf() is a variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

	%[flags][length]specifier
	
If the program runs successfully, the **return value** is the amount of chars printed.
	



## File Functions
------------------

### _printf.c
Own Printf Function That Performs Formatted Output Conversion And Print Data.

### main.h
Header File Where All Prototypes Are Saved.

### get_specifier_print_function.c
Pointer To A Function That Selects The Correct Function To Perform The Operation.

### print_character.c
Function That Writes The Character C To Stdout.

/* Indetifier : %c */

### print_string.c
Function That Writes The String To Stdout.

/* Indetifier : %s */

### print_regular.c
Function That Writes The rest of the letters which are not special nor specifiers



### Authors
Mina Sami

------------

### End

Mina Sami @ ALX software engineering programme 2023.
