#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @s: input string to be printed
 * @count: printing bytes count.
 *
 * Return: void
 */

void _puts(char *s, int *count)
{
	while (*s != '\0')
	{
		_putchar(*s++);
		*count = *count + 1;
	}
}
