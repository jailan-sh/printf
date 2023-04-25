#include "main.h"

/**
 * print_function - if belongs to a special char it will run
 * function and print it.
 * @format: char that could describe the format in which next arg is printed.
 * @p: printing selection. If 0 no printing in stdout is done. If 1 print.
 * @valist: arguments list to be formated.
 * @count: count of bytes if printed.
 *
 * Return: 0 if no errors in format are found, 1 if format is not the correct.
 */

int print_function(char format, va_list *valist, int p, int *count)
{
	int i = 0;

	s_format special[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"u", print_uint},
		{"o", print_octal},
		{NULL, NULL}
	};

	while (special[i].c != NULL)
	{
		if (format == *special[i].c)
		{
			special[i].f(valist, p, count);
			return (0);
		}
		i++;
	}

	return (1);
}
