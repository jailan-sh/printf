#include "main.h"

/**
 * check_in - check format and arguments
 * @format: string with characters as arguments.
 * @original: original list of arguments
 * Return: (0) success, (2) error
 */

int check_in(const char *format, va_list *original)
{
	int i = 0, num = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '%')
			{
				i++;
			}
			else if (format[i])
			{
				print_function(format[i], original, 0, &num);
			}
			else
			{
				return (1);
			}
		}

		i++;
	}
	return (0);
}

/**
 * print_out - prints output in case or right input
 * @format: string with characters as an argument.
 * @copy: copy of the list of arguments
 * Return: number of charaters printed.
 */

int print_out(const char *format, va_list *copy)
{

	int i = 0, num = 0;

	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num = num + 1;
		}

		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				num = num + 1;
			}
			else
			{
				if (print_function(format[i], copy, 1, &num))
				{
					_putchar('%');
					_putchar(format[i]);
					num = num + 2;
				}
			}
		}
		if (format[i] != '\0')
			i++;
	}

	return (num);
}
