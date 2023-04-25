#include "main.h"

/**
 * print_number - prints integer
 * @n: number to be printed
 * @count: count of bytes printed.
 *
 * Return: void
 */

void print_number(int n, int *count)
{
	int result = n;
	int factor = 1;
	int sign = 1;

	if (n < 0)
	{
		sign *= -1;
		_putchar('-');
		*count = *count + 1;
	}

	while (result / 10)
	{
		factor = factor * 10;
		result = result / 10;
	}
	while (factor)
	{
		result = n / factor;
		_putchar((result * sign) + '0');
		*count = *count + 1;
		n = n - (result * factor);
		factor = factor / 10;
	}
}

/**
 * p_uint - prints an unsigned integer
 * @n: number to be printed
 * @count: count of bytes printed.
 *
 * Return: void
 */

void p_uint(unsigned int n, int *count)
{
	unsigned int result = n;
	unsigned int factor = 1;
	unsigned int sign = 1;

	while (result / 10)
	{
		factor = factor * 10;
		result = result / 10;
	}
	while (factor)
	{
		result = n / factor;
		_putchar((result * sign) + '0');
		*count = *count + 1;
		n = n - (result * factor);
		factor = factor / 10;
	}
}
