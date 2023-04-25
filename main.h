#ifndef MAIN_h_
#define MAIN_h_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct special_formats - Struct to select specifiers
 *
 * @c: data type
 * @f: The function associated
 */

typedef struct special_formats
{
	char *c;
	void (*f)(va_list *, int, int *);
} s_format;

int _putchar(char c);
void _puts(char *, int *);
/*main printf and check*/
int _printf(const char *format, ...);
int check_in(const char *format, va_list *);
int print_out(const char *format, va_list *);

/*functions*/
int print_function(char format, va_list *valist, int p, int *count);
void print_char(va_list *valist, int p, int *count);
void print_string(va_list *valist, int p, int *count);
void print_int(va_list *valist, int p, int *count);
void print_bin(va_list *valist, int p, int *count);
void p_uint(unsigned int n, int *count);
void print_o(va_list *, int, int *count);
void print_X(va_list *valist, int p, int *count);

/*flags, convert numbers and aid functions*/
void print_number(int, int *);
void p_bin(unsigned int n, int *count);
void print_uint(va_list *valist, int p, int *count);
void print_o(va_list *, int, int *count);
void print_octal(unsigned int, int *);
void print_UpperX(va_list *valist, int p, int *count);

#endif
