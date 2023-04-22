#include "main.h"
/**
 * _printf-function that produces output according to a format
 * Return:number of characters printed
 * format:character string 
 */
	int _printf(const char *format, ...)
{
	int x = 0;

	va_list string;
	va_start(string, format)
		while (*format')
		{
			if (*format == '%')
			{ 
				format ++;
				switch (*format)
				{
					case 'c':
					putchar(va_arg(srting, int);
					x++;
					break;
					case '%':
					putchar('%');
					x++;
					break;
					case 's':
					fputs(va_arg(string, cont char*), stdout);
					x+= strlen(va_arg(string, cont char*));
					break;
				}
			}
			else
			{
			putchar(*format);
			x++;
			}
			format++;
		}
		va_end(string);
		return x;
}



