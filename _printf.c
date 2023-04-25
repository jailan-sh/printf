#include "main.h"

/**
 * _printf - function simulate printf implementation.
 * @format: string of characters as an arguments.
 * Return: number of charaters printed.
 */

int _printf(const char *format, ...)
{
	va_list original, copy;
	int num = 0, error = 0;

	if (format == NULL || *format == '\0')
		return (-1);

	va_start(original, format);
	va_copy(copy, original);

	error = check_in(format, &original);

	if (error != 0)
	{
		return (error * -1);
	}

	num = print_out(format, &copy);

	va_end(original);
	va_end(copy);

	return (num);
}
