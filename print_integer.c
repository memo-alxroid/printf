#include "main.h"

/**
 * printInteger - prints an integer
 * @args: list of argument types passed to the function
 * @count: number of characters
 * Return: number of characters printed
 */

int printInteger(va_list args, int *count)
{
	int n, divisor, length, i, lastDigit, result;

	n = va_arg(args, int);
	divisor = 1;
	length = 0;
	if (n < 0)
	{
		putchar('-');
		*count += 1;
	}
	while (n / divisor > 9 || n / divisor < -9)
	{
		divisor *= 10;
		length++;
	}
	for (i = length + 1; i >= 1; i--)
	{
		lastDigit = (n / divisor) % 10;
		divisor /= 10;
		if (lastDigit < 0)
		{
			lastDigit *= -1;
		}
		result = putchar(lastDigit + '0');
		if (result == -1)
		{
			return (-1);
		}
		*count += 1;
	}
	return (*count);
}
