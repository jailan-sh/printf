#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int printed_chars = 0;

    while (*format != '\0') {
        if (*format == '%') {
            format++;  // move past the '%'

            if (*format == 'd' || *format == 'i') {
                // print a signed integer
                int num = va_arg(args, int);
                printf("%d", num);
                printed_chars += snprintf(NULL, 0, "%d", num);  // count the number of characters printed
            } else if (*format == 'c') {
                // print a single character
                char c = (char) va_arg(args, int);  // convert int to char
                putchar(c);
                printed_chars++;
            } else if (*format == 's') {
                // print a string
                char* str = va_arg(args, char*);
                fputs(str, stdout);
                printed_chars += strlen(str);
            } else if (*format == '%') {
                // print a literal '%'
                putchar('%');
                printed_chars++;
            }
        } else {
            // print a literal character
            putchar(*format);
            printed_chars++;
        }

        format++;
    }

    va_end(args);

    return printed_chars;
}
