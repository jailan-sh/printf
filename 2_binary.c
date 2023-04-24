#include "main.h"
/** my_printf-handle custom conversion specifier
 * Return:binary equivalent to number
 * @format:string
 */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OUTPUT_BUFFER_SIZE 100

// Custom printf function with support for the "b" conversion specifier
int my_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    char output_buffer[OUTPUT_BUFFER_SIZE];
    char *output_ptr = output_buffer;
    const char *format_ptr = format;

    while (*format_ptr != '\0') {
        if (*format_ptr == '%') {
            // Handle custom conversion specifier
            format_ptr++;
            if (*format_ptr == 'b') {
                unsigned int value = va_arg(args, unsigned int);
                char binary_string[33];
                itoa(value, binary_string, 2);
                size_t binary_string_len = strlen(binary_string);
                if (output_ptr + binary_string_len >= output_buffer + OUTPUT_BUFFER_SIZE) {
                    // Output buffer overflow
                    return -1;
                }
                strcpy(output_ptr, binary_string);
                output_ptr += binary_string_len;
            }
            else {
                // Unsupported conversion specifier
                return -1;
            }
        }
        else {
            // Copy non-format characters to output buffer
            if (output_ptr + 1 >= output_buffer + OUTPUT_BUFFER_SIZE) {
                // Output buffer overflow
                return -1;
            }
            *output_ptr = *format_ptr;
            output_ptr++;
        }
        format_ptr++;
    }

    *output_ptr = '\0';
    puts(output_buffer);

    va_end(args);
    return 0;
}

// Example usage
int main() {
    unsigned int value = 42;
    my_printf("%b\n", value);  // Output: 101010
    return 0;
}
